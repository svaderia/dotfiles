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
source /usr/local/opt/chruby/share/chruby/chruby.sh
source /usr/local/opt/chruby/share/chruby/auto.sh
chruby ruby-3.1.3
