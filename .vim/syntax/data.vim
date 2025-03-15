"-----------------------------------------------------------------------
" Vim syntax file
" Language: data
" Maintainer: Shyamal Vaderia
" Description: Syntax highlighting for data files
"-----------------------------------------------------------------------

if exists("b:current_syntax")
    finish
endif

syntax match dataComment "#.*$" contains=dataImportant,dataTODO
hi def link dataComment Comment

syntax match dataImportant /\<\(TESTER\|OUTPUT\)\>/ containedin=ALL
hi def link dataImportant Type

syn keyword dataTodo FIXME NOTE NOTES TODO XXX
hi def link dataTodo Todo

syn match   dataDecorator	"@" display contained
syn match   dataDecoratorName	"@\s*\h\%(\w\|\.\)*" display contains=dataDecorator
hi def link dataDecorator Define
hi def link dataDecoratorName Function

syn match dataDecl "\$" contained
syn match dataDeclName "\$\s*\h\%(\w\|\.\)*" contains=dataDecl nextgroup=dataDeclArg skipwhite
syn match dataDeclArg "\k" contained nextgroup=dataDeclArg skipwhite

hi def link dataDecl     Define
hi def link dataDeclName Type
hi def link dataDeclArg  Statement
hi def link dataInt     Int

" Highlight the colon
syntax match dataColon /:/ contained
hi def link dataColon Delimiter

syntax match dataName  ":\s*\h\%(\w\|\.\)*" contains=dataColon
hi def link dataName Identifier

syntax match dataNumber /-\?\d\+/
hi def link dataNumber Number

let b:current_syntax = "data"

