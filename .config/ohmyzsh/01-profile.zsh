if [ -z "$GITHUB_DIR" ]; then 
  echo "GITHUB_DIR is blank, Please set it to some value in $ZSH_CUSTOM/00-setup.zsh"; 
  echo "Run 'exec zsh -l' afger that to reload the shell"
  echo "    A lot of stuff will not work right now."
fi

export LC_ALL=en_US.UTF-8

# export GPG_TTY=$(tty)
# Read below links to see why above not always work. I faced this with a remote server today so changing this.
# https://stackoverflow.com/questions/41052538/git-error-gpg-failed-to-sign-data
# https://unix.stackexchange.com/questions/608842/zshrc-export-gpg-tty-tty-says-not-a-tty
export GPG_TTY=$TTY

export HISTSIZE=100000
export PATH=$PATH:$HOME/.poetry/bin

export SVD="$GITHUB_DIR/svaderia.github.io"
export CPD="$GITHUB_DIR/competitive-programming"

export CCTEMPLATEPATH=$CPD/TEMPLATE

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

# Setting fd as the default source for fzf
# fd by default ignores hidden files, .gitignore
export FZF_DEFAULT_COMMAND='fd --type f --strip-cwd-prefix'

# To apply the command to CTRL-T as well
export FZF_CTRL_T_COMMAND="$FZF_DEFAULT_COMMAND"

export _Z_ECHO=1
eval "$(zoxide init zsh)"

# Add rustup related man pages
export RUSTUP_TOOLCHAIN_PATH=$(rustc --print sysroot)
export MANPATH="$RUSTUP_TOOLCHAIN_PATH/share/man:$MANPATH"

