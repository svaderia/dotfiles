[ -f local_profile.zsh ] && source local_profile.zsh
export LC_ALL=en_US.UTF-8

# export GPG_TTY=$(tty)
# Read below links to see why above not always work. I faced this with a remote server today so changing this.
# https://stackoverflow.com/questions/41052538/git-error-gpg-failed-to-sign-data
# https://unix.stackexchange.com/questions/608842/zshrc-export-gpg-tty-tty-says-not-a-tty
export GPG_TTY=$TTY

export HISTSIZE=100000
export PATH=$PATH:$HOME/.poetry/bin
export CCTEMPLATEPATH=$HOME/Shyamal/GitHub/Competitive-Coding/TEMPLATE
export GO111MODULE=auto
export GOPATH=$HOME/go
export PATH=$PATH:$GOPATH/bin
export PATH=$PATH:$HOME/bin

# https://github.com/djui/alias-tips
export ZSH_PLUGINS_ALIAS_TIPS_TEXT="Alias tip: "

export ZSH_PLUGINS_ALIAS_TIPS_EXCLUDES="_ ll vi"
export ZSH_PLUGINS_ALIAS_TIPS_REVEAL=1
export ZSH_PLUGINS_ALIAS_TIPS_REVEAL_TEXT="Alias for: "
export ZSH_PLUGINS_ALIAS_TIPS_REVEAL_EXCLUDES=(_ ll vi)


