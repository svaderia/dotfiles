" In quickfix windown keep Enter as enter to jump between errors
" Basically override your <CR> mapping from vimrc
nnoremap <buffer> <CR> <CR>

" Position the (global) quickfix window at the very bottom of the window
" (useful for making sure that it appears underneath splits)
" https://github.com/fatih/vim-go/issues/108#issuecomment-565131948
" NOTE: Using a check here to make sure that window-specific location-lists
" aren't effected, as they use the same `FileType` as quickfix-lists.
if (getwininfo(win_getid())[0].loclist != 1)
  wincmd J
endif
