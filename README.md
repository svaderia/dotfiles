# dotfiles

I am using git [submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) and git bare repository to maintain my dotfiles.

## Migrate to a new system
```bash
alias config='/usr/bin/git --git-dir=$HOME/dotfiles/ --work-tree=$HOME'

echo "dotfiles" >> .gitignore

git clone --bare https://github.com/svaderia/dotfiles $HOME/dotfiles

# Checkout config from bare repository to home
# if you get error, take backup of all the files
config checkout

config config --local status.showUntrackedFiles no

# When you are first initialising the submodules on a new system, run below command
config submodule update --init --recursive

# If you are on linux/windows, you will need install ZSH Separetly.
# Please follow the instructions from here:
# https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH
# make sure to make it a default shell

# Reload the shell before doing below

# Don't forget to change the local_profile.zsh and local_alias.zsh to set the new paths
cp $ZSH_CUSTOM/setup.zsh.example $ZSH_CUSTOM/00-setup.zsh
touch $ZSH_CUSTOM/02-local_profile.zsh
touch $ZSH_CUSTOM/04-local_alias.zsh

# Optional
## Use following to update your git name and email
## TODO: This can be moved to a global variable in profile.zsh
git config --global user.name "svaderia"
git config --global user.email "<email>"
git config --global credential.helper store
git config --global core.editor vim

```
### Generate a new GPG key and set it to sign your commits with git
* https://docs.github.com/en/authentication/managing-commit-signature-verification/generating-a-new-gpg-key
* https://docs.github.com/en/authentication/managing-commit-signature-verification/telling-git-about-your-signing-key

## Updating all the packages
```bash
config submodule update --remote --merge

# create the undodir for the .vim
mkdir -p ~/.vim/undodir

```

## Remove a package
```bash
config submodule deinit .vim/pack/bundle/start/vim-airline
config rm .vim/pack/bundle/start/vim-airline
rm -Rf .git/modules/.vim/pack/bundle/start/vim-airline
config commit
```

## Add a new vim plugin (or anynew submodule for that matter)
```bash
config submodule add https://github.com/kana/vim-textobj-user ~/.vim/pack/bundle/start/vim-textobj-user
# Commit it
config add .gitsubmodule ~/.vim/pack/bundle/start/vim-textobj-user
config commit
```

## Installed tools
If you are trying to install on linux, where you have `sudo` access, then install `brew` first and then install the tools via `brew`.
Simple reason for this is `fzf` does not maintain active latest packages in `APT` package manage.

You can otherwise install it manually as well. Brew can also be installed without root priviledges, see the installation instructions of brew.
* [fzf](https://github.com/junegunn/fzf/)
* [fd](https://github.com/sharkdp/fd)
* [ripgrep](https://github.com/BurntSushi/ripgrep) 


## Reference

* [Vim: So long Pathogen, hello native package loading](https://shapeshed.com/vim-packages/)
* [The best way to store your dotfiles: A bare Git repository](https://www.atlassian.com/git/tutorials/dotfiles)
