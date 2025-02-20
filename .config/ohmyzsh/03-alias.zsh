# print easiy
to_pdf() {
  if [[ $# -lt 2 ]]; then
    echo "Usage: enscript_to_pdf <output> <file1> [file2 file3 ...]"
    return 1
  fi

  local output=$1
  shift
  local files=("$@")

  # Step 1: Generate the PostScript file
  enscript -2rG -fCourier7 -FCourier-Bold10 -p "${output}.ps" "${files[@]}"

  # Step 2: Convert the PostScript file to PDF
  ps2pdf "${output}.ps" "${output}.pdf"

  # Optional: Clean up the intermediate PostScript file
  rm -f "${output}.ps"

  echo "PDF generated: ${output}.pdf"
}

# Maths
alias solved="python $CPD/update_readme.py solved"
alias update="python $CPD/update_readme.py"

alias svd="cd $SVD"
alias ccd="cd $CPD"
alias gcd="cd $GITHUB_DIR"
alias qcd="cd $GITHUB_DIR/quote-of-the-day"

# THIS CAN SAVE LIVES
alias mv="mv -i"
alias rm="rm -i"

# easy ssh
alias sln="ssh svaderia@linux.andrew.cmu.edu"


# Function to extract the title from a Jekyll post's front-matter and rename the current file with date-title.md
# @param: $file            filepath of the post
# @param: $dir_directory   (optional) filepath for the draft directory
#
# extracted title is converted to lowercase and the spaces are replaced with the hyphens.
# the output file has the format YYYY-MM-DD-<title>.md
# if the title is not present, we don't change the file name.
#     If the draft_directory is provided, we move the file to that directory instead.
# @output: exctracted title with prefixed directory.
rename_jekyll_file_with_title(){
  local file=$1
  local draft_dir=$2
  local commit_title=${3:-"wiki"}

  # ---------------------------
  # 1) Determine the "current" date from the filename (if possible)
  # ---------------------------
  local basename_no_dir
  basename_no_dir=$(basename "$file")

  regex='^([0-9]{4}-[0-9]{2}-[0-9]{2})-'

  # parse the first 10 characters (YYYY-MM-DD) if they match the pattern
  local curr_date
  if [[ $basename_no_dir =~ $regex ]]; then
    curr_date="${match[1]}"    # e.g. 2024-05-28
  else
    curr_date=$(date +%F)            # fallback if no date prefix
  fi

  # ---------------------------
  # 2) Grab the title from the front matter
  # ---------------------------
  local title
  title=$(awk '/^---/{flag=!flag;next} flag' "$file" \
       | awk '/^title: /{print substr($0, index($0,$2))}' \
       | sed 's/"//g')
  local formatted_title
  formatted_title=$(echo "$title" | tr '[:upper:]' '[:lower:]' | sed 's/ /-/g')

  # ---------------------------
  # 3) Decide on the new filename
  # ---------------------------
  local new_file_name
  if [[ -z $formatted_title ]]; then
    # If there's no title in the front matter, keep it as a draft
    new_file_name="${draft_dir}${curr_date}-${basename_no_dir}"
    title="(draft) snipping random"
  else
    # If there's a valid title, rename to <date>-<title>.md
    title="($commit_title) $title"
    new_file_name="${curr_date}-${formatted_title}.md"
  fi

  # rename and output
  mv "$file" "$new_file_name"
  echo "$title,,$new_file_name"
}

undraft(){
  local file=${1}

  # provide draft directory to move to when required.
  local output=$(rename_jekyll_file_with_title $file)

  # Split the output string into variables
  local title new_file_name
  title=$(echo "$output" | awk -F',,' '{print $1}')
  new_file_name=$(echo "$output" | awk -F',,' '{print $2}')
  echo "new file anme : $new_file_name"
  echo "$new_file_name" | od -c

  mv $new_file_name $SVD/_posts/wiki/
}


# Creates a new snippet file in the _posts/wiki directory
# Renames the file with the title if exists, moves to the _draft directory otherwise
# Commits the new file in git
# cd to the previous directory
snip(){
  local default_folder=${1:-"/_posts/wiki/"}
  local commit_title=${2:-"wiki"}

  cd $SVD$default_folder

  local curr_time=$(date +%s)
  local file=snippet_$curr_time.md
  vim $file

  # provide draft directory to move to when required.
  local output=$(rename_jekyll_file_with_title $file "$SVD/_drafts/" $commit_title)

  # Split the output string into variables
  local title new_file_name
  title=$(echo "$output" | awk -F',,' '{print $1}')
  new_file_name=$(echo "$output" | awk -F',,' '{print $2}')

  # create a commit
  git add $new_file_name
  git commit -m "$title"

  cd -
}

dsa(){
  snip /_posts/dsa/ dsa
}

todo (){
  cd $SVD/_drafts/
  vim todo.md
  cd -
}

## Open the latest edited file in svaderia.github.io
function lat() {
  # Hardcoded path to the directory
  local target_dir=$SVD

  # Change to the specified directory
  cd "$target_dir" || { echo "Failed to change directory to $target_dir"; return 1; }

  # Find the latest modified file in the directory and its subdirectories
  latest_file=$(fd -t f --exec-batch stat -f '%m %R' {} | sort -r | head -n 1 | awk '{print $2}')

  # Check if there is at least one file found
  if [ -z "$latest_file" ]; then
    echo "No files found in directory $target_dir or its subdirectories"
    return 1
  fi

  # Open the latest modified file with vim
  vim "$latest_file"
}

function dn(){
  cd $SVD

  vim _posts/dsa/2024-05-28-notes-during-my-cp-journey.md

}


alias ll='ls -lht'
alias gkl="jekyll serve --config _config.yml,_config_dev.yml --drafts"
alias kl="bundle exec jekyll serve"
alias gl='git log --pretty=format:"%h : %an : %ar : %s/"'

alias py="$HOME/bin/pyscript.py"

alias gd='git difftool'

alias ip="ip -c"

pyclean () {
        find . -type f -name "*.py[co]" -delete
        find . -type d -name "__pycache__" -delete
}

# alias g++="g++-9 -std=c++17 -Wall -Wextra -Wshadow -Wconversion -O2 -D DEBUG"
# alias gd++="g++-9 -std=c++17 -Wall -Wextra -Wshadow -Wconversion -O2"

start () {
    mkdir -p $1
    touch $1/test
    cp $CCTEMPLATEPATH/solution.cpp $1/$2.cpp
}

# starts a template with solution.cpp
# if it already exists then create a new one with timestamp appended.
sc(){
    local curr_time=$(date +%s)
    if [ -e $1/solution.cpp ]; then
      start $1 new_solution_$curr_time
      vim $1/new_solution_$curr_time.cpp
    else
      start $1 solution
      vim $1/solution.cpp
    fi
}

contest () {
    mkdir -p $1
    cd $1
    for fl in {a..f}
    do
        start "$fl" solution
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
alias capa='config add --patch'
alias cc='config commit --verbose'
alias cc!='config commit --verbose --amend'
alias ccpush='config push'
alias ccpull='config pull'

# Alias for directory hisotry
alias d='dirs -v | head -10'

# Change jdk version dynamicly
jdk() {
    version=$1
    unset JAVA_HOME;
    export JAVA_HOME=$(/usr/libexec/java_home -v"$version");
    java -version
}

alias sctf="ssh -D 8123 -C -q -N tunneller@ctf.ini.cmu.edu"

## Easy access to change alias and profile 
alias eal="vim ~/.config/ohmyzsh/03-alias.zsh"
alias epro="vim ~/.config/ohmyzsh/01-profile.zsh"


## https://github.com/ohmyzsh/ohmyzsh/blob/master/plugins/git/git.plugin.zsh
# Inspired from above, but I don't want to have so many aliases, so going to trim it down

# the plugin, before being pulled in to core lib/git.zsh as git_current_branch()
# to fix the core -> git plugin dependency.
# Check for develop and similarly named branches
function git_develop_branch() {
  command git rev-parse --git-dir &>/dev/null || return
  local branch
  for branch in dev devel develop development; do
    if command git show-ref -q --verify refs/heads/$branch; then
      echo $branch
      return 0
    fi
  done

  echo develop
  return 1
}

# Check if main exists and use instead of master
function git_main_branch() {
  command git rev-parse --git-dir &>/dev/null || return
  local ref
  for ref in refs/{heads,remotes/{origin,upstream}}/{main,trunk,mainline,default,master}; do
    if command git show-ref -q --verify $ref; then
      echo ${ref:t}
      return 0
    fi
  done

  # If no main branch was found, fall back to master but return error
  echo master
  return 1
}

# rename a Branch
function grename() {
  if [[ -z "$1" || -z "$2" ]]; then
    echo "Usage: $0 old_branch new_branch"
    return 1
  fi

  # Rename branch locally
  git branch -m "$1" "$2"
  # Rename branch in origin remote
  if git push origin :"$1"; then
    git push --set-upstream origin "$2"
  fi
}

#
# Functions Work in Progress (WIP)
# (sorted alphabetically by function name)
# (order should follow README)
#

# Similar to `gunwip` but recursive "Unwips" all recent `--wip--` commits not just the last one
function gunwipall() {
  local _commit=$(git log --grep='--wip--' --invert-grep --max-count=1 --format=format:%H)

  # Check if a commit without "--wip--" was found and it's not the same as HEAD
  if [[ "$_commit" != "$(git rev-parse HEAD)" ]]; then
    git reset $_commit || return 1
  fi
}

# Warn if the current branch is a WIP
function work_in_progress() {
  command git -c log.showSignature=false log -n 1 2>/dev/null | grep -q -- "--wip--" && echo "WIP!!"
}

# git aliases

alias g='git'
alias ga='git add'
alias gaa='git add --all'
alias gapa='git add --patch'

alias gau='git add --update'
alias gav='git add --verbose'

alias gwip='git add -A; git rm $(git ls-files --deleted) 2> /dev/null; git commit --no-verify --no-gpg-sign --message "--wip-- [skip ci]"'

alias gbs='git bisect'
alias gbsb='git bisect bad'
alias gbsg='git bisect good'
alias gbsn='git bisect new'
alias gbso='git bisect old'
alias gbsr='git bisect reset'
alias gbss='git bisect start'

alias gbl='git blame -w'

alias gb='git --no-pager branch'

function gbda() {
  git branch --no-color --merged | command grep -vE "^([+*]|\s*($(git_main_branch)|$(git_develop_branch))\s*$)" | command xargs git branch --delete 2>/dev/null
}

# Copied and modified from James Roeder (jmaroeder) under MIT License
# https://github.com/jmaroeder/plugin-git/blob/216723ef4f9e8dde399661c39c80bdf73f4076c4/functions/gbda.fish
function gbds() {
  local default_branch=$(git_main_branch)
  (( ! $? )) || default_branch=$(git_develop_branch)

  git for-each-ref refs/heads/ "--format=%(refname:short)" | \
    while read branch; do
      local merge_base=$(git merge-base $default_branch $branch)
      if [[ $(git cherry $default_branch $(git commit-tree $(git rev-parse $branch\^{tree}) -p $merge_base -m _)) = -* ]]; then
        git branch -D $branch
      fi
    done
}

alias gco='git checkout'
alias gcb='git checkout -b'
alias gcB='git checkout -B'
alias gcm='git checkout $(git_main_branch)'

alias gcl='git clone --recurse-submodules'

alias gc='git commit --verbose'
alias gc!='git commit --verbose --amend'

alias gcf='git config --list'

alias gd='git diff'
alias gdca='git diff --cached'

function gdv() { git diff -w "$@" | view - }
compdef _git gdv=git-diff

alias gdup='git diff @{upstream}'

alias gdt='git diff-tree --no-commit-id --name-only -r'

alias glgg='git log --graph'
alias glgga='git log --graph --decorate --all'

alias glola='git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ar) %C(bold blue)<%an>%Creset" --all'
alias glol='git log --graph --pretty="%Cred%h%Creset -%C(auto)%d%Creset %s %Cgreen(%ar) %C(bold blue)<%an>%Creset"'

alias glog='git log --oneline --decorate --graph'
alias gloga='git log --oneline --decorate --graph --all'

alias gfg='git ls-files | grep'

alias gmtl='git mergetool --no-prompt'
alias gmtlvim='git mergetool --no-prompt --tool=vimdiff'

alias ggpull='git pull origin "$(git_current_branch)"'

alias ggpush='git push origin "$(git_current_branch)"'

alias grb='git rebase'
alias grba='git rebase --abort'
alias grbc='git rebase --continue'
alias grbi='git rebase --interactive'
alias grbd='git rebase $(git_develop_branch)'
alias grbm='git rebase $(git_main_branch)'

alias gr='git remote'

alias gunwip='git rev-list --max-count=1 --format="%s" HEAD | grep -q "\--wip--" && git reset HEAD~1'

alias grev='git revert'
alias greva='git revert --abort'
alias grevc='git revert --continue'

alias grm='git rm'
alias grmc='git rm --cached'

alias gstall='git stash --all'
alias gstaa='git stash apply'
alias gstc='git stash clear'
alias gstd='git stash drop'
alias gstl='git stash list'
alias gstp='git stash pop'
# use the default stash push on git 2.13 and newer
is-at-least 2.13 "$git_version" \
  && alias gsta='git stash push' \
  || alias gsta='git stash save'
alias gsts='git stash show --patch'

alias gst='git status'
alias gss='git status --short'
alias gsb='git status --short --branch'

alias gsi='git submodule init'
alias gsu='git submodule update'

alias gwch='git whatchanged -p --abbrev-commit --pretty=medium'
alias gwt='git worktree'

unset git_version
