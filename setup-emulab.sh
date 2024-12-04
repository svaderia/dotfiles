cp $ZSH_CUSTOM/setup.zsh.example $ZSH_CUSTOM/00-setup.zsh
touch $ZSH_CUSTOM/02-local_profile.zsh
touch $ZSH_CUSTOM/04-local_alias.zsh

# add the TERM to the local profile
echo "TERM=xterm-256color" > $ZSH_CUSTOM/02-local_profile.zsh

# install the linux brew and set it up
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

test -d ~/.linuxbrew && eval "$(~/.linuxbrew/bin/brew shellenv)"
test -d /home/linuxbrew/.linuxbrew && eval "$(/home/linuxbrew/.linuxbrew/bin/brew shellenv)"
echo "eval \"\$($(brew --prefix)/bin/brew shellenv)\"" >> $ZSH_CUSTOM/02-local_profile.zsh

brew install fd fzf ripgrep

echo "source <(/home/linuxbrew/.linuxbrew/bin/fzf --zsh)" >> $ZSH_CUSTOM/02-local_profile.zsh

zsh -l
