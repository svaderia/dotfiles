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
