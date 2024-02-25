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
```

## Updating all the packages
```bash
config submodule update --remote --merge
```

## Remove a package
```bash
config submodule deinit .vim/pack/bundle/start/vim-airline
config rm .vim/pack/bundle/start/vim-airline
rm -Rf .git/modules/.vim/pack/bundle/start/vim-airline
config commit
```

## Reference

* [Vim: So long Pathogen, hello native package loading](https://shapeshed.com/vim-packages/)
* [The best way to store your dotfiles: A bare Git repository](https://www.atlassian.com/git/tutorials/dotfiles)

## TODO
* I want to add a start up script which will run all the commands required to be run on a new machine. At least have them here.
* Maybe have a test script which will make sure all the component of my dotfiles are running correctly.

```bash
## Use following to update your git name and email
git config --global user.name "svaderia"
git config --global user.email "<email>"

## Generate a new GPG key and set it to sign your commits with git
# https://docs.github.com/en/authentication/managing-commit-signature-verification/generating-a-new-gpg-key
# https://docs.github.com/en/authentication/managing-commit-signature-verification/telling-git-about-your-signing-key
```
