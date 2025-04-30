# cp $ZSH_CUSTOM/setup.zsh.example $ZSH_CUSTOM/00-setup.zsh
# touch $ZSH_CUSTOM/02-local_profile.zsh
# touch $ZSH_CUSTOM/04-local_alias.zsh

# add the TERM to the local profile
# echo "TERM=xterm-256color" >> $ZSH_CUSTOM/02-local_profile.zsh

# install the linux brew and set it up
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

test -d ~/.linuxbrew && eval "$(~/.linuxbrew/bin/brew shellenv)"
test -d /home/linuxbrew/.linuxbrew && eval "$(/home/linuxbrew/.linuxbrew/bin/brew shellenv)"
echo "eval \"\$($(brew --prefix)/bin/brew shellenv)\"" >> $ZSH_CUSTOM/02-local_profile.zsh

brew install fd fzf ripgrep cscope

# echo "source <(/home/linuxbrew/.linuxbrew/bin/fzf --zsh)" >> $ZSH_CUSTOM/02-local_profile.zsh
# echo "MANPATH=~/custom_man:$MANPATH" >> $ZSH_CUSTOM/02-local_profile.zsh

sudo apt-get update -y
sudo apt-get upgrade -y
sudo apt-get install linux-tools-common linux-tools-generic linux-tools-`uname -r` -y
sudo apt-get install python3-venv python3-pip -y

# zsh -l
