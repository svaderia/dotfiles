alias ccd='~/Shyamal/GitHub/Competitive-Coding'
alias solved="python3 ~/Shyamal/GitHub/Competitive-Coding/update_readme.py solved"
alias update="python3 ~/Shyamal/GitHub/Competitive-Coding/update_readme.py"

alias ll='ls -lht'
alias gkl="jekyll serve --config _config.yml,_config_dev.yml --drafts"
alias kl="bundle exec jekyll serve"
alias gl='git log --pretty=format:"%h : %an : %ar : %s/"'

alias py="~/pyscript.py"

alias gstore="git config credential.helper store"
alias gfpush="git config credential.helper store && git push origin master"
alias gfcommit='git add . && git commit -m ":rocket: Initial Commit"'
alias gd='git difftool'

alias ip="ip -c"

pyclean () {
        find . -type f -name "*.py[co]" -delete
        find . -type d -name "__pycache__" -delete
}

alias g++="g++-9 -std=c++17 -Wall -Wextra -Wshadow -Wconversion -O2 -D DEBUG"
alias gd++="g++-9 -std=c++17 -Wall -Wextra -Wshadow -Wconversion -O2"

start () {
    mkdir -p $1
    touch $1/test
    cp $CCTEMPLATEPATH/solution.cpp $1/solution.cpp
}

sc() {
    start $1
    vim $1/solution.cpp
}

contest () {
    mkdir -p $1
    cd $1
    for fl in {a..f}
    do
        start "$fl"
    done
}

alias latest='fd ".*/*solution.(cpp|py)" -0 | xargs -0 stat -f "%m%t%Sm %N" | sort -rn | cut -f2- | head '

alias vi='vim'

# Alias for t
alias t='t --task-dir ~/.tasks'
alias tcp='t --list cp'

# Alias for dotfile config
alias config='/usr/bin/git --git-dir=$HOME/dotfiles/ --work-tree=$HOME'
alias caddsub='config submodule add'
alias cupdatesub='git submodule update --remote --merge'
alias cst='config status'
alias ca='config add'
alias cc='config commit'
alias ccpush='config push'
