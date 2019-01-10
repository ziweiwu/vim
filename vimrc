set number
set hlsearch
set incsearch
set ignorecase
set smartcase
set autoread
"set hidden "stop asking to save buffer"

" use C-l to clear search highlighting
if maparg('<C-L>', 'n') ==# ''
  nnoremap <silent> <C-L> :nohlsearch<C-R>=has('diff')?'<Bar>diffupdate':''<CR><CR><C-L>
endif

set visualbell t_vb=
set autoindent
set smartindent
set shiftwidth=2 
set ts=2
set expandtab 

set nospell
set autoread

set backspace=indent,eol,start
set complete-=i

set clipboard=unnamed
set showmatch

if !has('nvim') && &ttimeoutlen == -1
  set ttimeout
  set ttimeoutlen=100
endif

set laststatus=2
set ruler
set wildmenu

" backspace to move backward
if &listchars ==# 'eol:$'
  set listchars=tab:>\ ,trail:-,extends:>,precedes:<,nbsp:+
endif

if v:version > 703 || v:version == 703 && has("patch541")
  set formatoptions+=j " Delete comment character when joining commented lines
endif

" set backup directories
set directory^=$HOME/.vim/swapfiles/

" persistent undo "
set undodir=~/.vim/undodir
set undofile
set dictionary="/usr/dict/words"


inoremap <C-v> <ESC>"+pa
inoremap <C-c> <ESC>"+y
inoremap <C-d> <ESC>"+d
map <leader>f :FZF<CR>
map <leader>l :ClangFormat<CR>
map <leader>s :update<CR>
map <leader>a :Ack!<space>
map <leader>n :set invnumber<CR>
map <leader>g :NERDTreeToggle<CR>

"YCM
let g:ycm_auto_trigger = 1
let g:ycm_global_ycm_extra_conf = '~/ycm_files/.ycm_extra_conf.py'
let g:ycm_python_binary_path = '/usr/bin/python'
let g:ycm_cache_omnifunc = 1
let g:ycm_collect_identifiers_from_tags_files = 1
let g:ycm_min_num_of_chars_for_completion = 2 
let g:ycm_add_preview_to_completeopt = 1
let g:ycm_use_ultisnips_completer = 1
let g:ycm_cache_omnifunc = 1
let g:ycm_max_diagnostics_to_display=16
let g:ycm_disable_for_files_larger_than_kb = 50000
"let g:ycm_key_list_select_completion = ['<C-n>', '<C-j>']
"let g:ycm_key_list_previous_completion = ['<C-p>', '<C-k>']
let g:ycm_filetype_blacklist = {
			\ 'tagbar' : 1,
			\ 'qf' : 1,
			\ 'notes' : 1,
			\ 'markdown' : 1,
			\ 'unite' : 1,
			\ 'text' : 1,
			\ 'vimwiki' : 1,
			\ 'pandoc' : 1,
			\ 'infolog' : 1,
			\ 'mail' : 1,
			\ 'mundo': 1,
			\ 'fzf': 1,
			\ 'ctrlp' : 1
			\}
let g:ycm_error_symbol = '>>'
let g:ycm_warning_symbol = '>*'

let $FZF_DEFAULT_COMMAND = 'ag --hidden --ignore .git -l -g ""'

let g:python_highlight_all = 1

call plug#begin('~/.vim/plugged')
Plug 'tpope/vim-tbone'
Plug 'w0rp/ale'
Plug 'vim-python/python-syntax'
Plug 'NLKNguyen/c-syntax.vim'
Plug 'scrooloose/nerdtree'
Plug 'gabrielelana/vim-markdown'
Plug 'vim-latex/vim-latex'
Plug 'pangloss/vim-javascript'
Plug 'maxmellon/vim-jsx-pretty'
Plug 'jiangmiao/auto-pairs'
Plug 'mindriot101/vim-yapf'
Plug 'rhysd/vim-clang-format'
Plug 'davidhalter/jedi-vim'
Plug 'Valloric/YouCompleteMe'
Plug 'scrooloose/nerdtree'
Plug 'fholgado/minibufexpl.vim'
Plug 'junegunn/fzf'
Plug 'tpope/vim-surround'
Plug 'scrooloose/nerdcommenter'
Plug 'rdnetto/YCM-Generator', { 'branch': 'stable' }
Plug 'mileszs/ack.vim'
Plug 'Chiel92/vim-autoformat'
Plug 'google/vim-searchindex'
"Plug 'ajh17/VimCompletesMe'

"themes
Plug 'rafi/awesome-vim-colorschemes'
Plug 'altercation/vim-colors-solarized'
Plug 'morhetz/gruvbox'
Plug 'kaicataldo/material.vim'
Plug 'crusoexia/vim-monokai'
Plug 'lifepillar/vim-solarized8'
call plug#end()


if $TERM_PROGRAM=='iTerm.app'
  set termguicolors
else 
    set t_Co=256
endif

set background=dark
"set background=light
"color gruvbox
"color dracula
color material
"color solarized8
"color PaperColor
"color delek
"color space-vim-dark
