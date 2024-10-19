" Reference : https://benjamincongdon.me/blog/2020/06/27/Vim-Tip-Paste-Markdown-Link-with-Automatic-Title-Fetching/
" https://www.reddit.com/r/vim/comments/139fn2b/plugin_paste_markdown_link_with_title/

let g:replace_map = {
\ 'Algorithms for Competitive Programming': 'cp-algorithms',
\ }

function GetURLTitle(url)
    " Bail early if the url obviously isn't a URL.
    if a:url !~ '^https\?://'
        return ""
    endif

    silent let html = system('curl -L ' . shellescape(a:url) . ' -A "Mozilla/5.0 (X11; Linux x86_64; rv:60.0) Gecko/20100101 Firefox/81.0"')
    if v:shell_error  " curl command returned nonzero exit code
        let title = ''
    else
        let m = matchlist(html, '<title>\(.\{-}\)</title>')
        if empty(m)  " tag not found in output
            let title = ''
        else
            let title = m[1]  " the 1st substitution group
        endif
    endif
    let title = substitute(title, '|', '-', 'g')
    let title = substitute(title, '\n', '', 'g')

    " Replace strings based on the map
    for [old, new] in items(g:replace_map)
        let title = substitute(title, old, new, 'g')
    endfor

    return title

endfunction

function PasteMDLink()
    let url = getreg("*")
    let title = GetURLTitle(url)
    let mdLink = printf("[%s](%s)", title, url)
    execute "normal! a" . mdLink . "\<Esc>"
endfunction

" Make a keybinding (mnemonic: "link paste")
nnoremap <Leader>lp :call PasteMDLink()<CR>
nnoremap <Leader>lP o<ESC>:call PasteMDLink()<CR>

iabbrev lp <ESC>:call PasteMDLink()<CR>a

" concealing for md file
set conceallevel=2

" This is just for md files, since having this in all the files might be
" irritating
" Try auto save if it's not very annoying
" This because my computer decided to crash yesterday and the progress I made
" on an article is lost now
autocmd CursorHold <buffer> update
