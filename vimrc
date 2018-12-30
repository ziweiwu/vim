set number
set hlsearch
set incsearch
set ignorecase
set smartcase
set autoread
"set hidden "stop asking to save buffer"

set autoindent
set smartindent
set shiftwidth=2 
set ts=2
set expandtab 

set nospell
set autoread

set clipboard=unnamed
set showmatch
set ttyfast
set timeoutlen=1000 ttimeoutlen=0


" set backup directories
set directory^=$HOME/.vim/swapfiles/

" persistent undo "
set undodir=~/.vim/undodir
set undofile

if exists('+termguicolors')
  let &t_8f = "\<Esc>[38;2;%lu;%lu;%lum"
  let &t_8b = "\<Esc>[48;2;%lu;%lu;%lum"
  set termguicolors
endif

set background=dark
"set background=light
"color gruvbox
"color dracula
color material
"color solarized8
"color PaperColor

inoremap <C-v> <ESC>"+pa
inoremap <C-c> <ESC>"+y
inoremap <C-d> <ESC>"+d
map <leader>f :FZF<CR>
map <leader>l :ClangFormat<CR>
map <leader>s :update<CR>
map <leader>a :Ack!<space>
map <leader>n :set invnumber<CR>
map <leader>g :NERDTreeToggle<CR>

" set tab completion instead of ctrl+n
function! Tab_Or_Complete()
  if col('.')>1 && strpart( getline('.'), col('.')-2, 3 ) =~ '^\w'
    return "\<C-N>"
  else
    return "\<Tab>"
  endif
endfunction
inoremap <Tab> <C-R>=Tab_Or_Complete()<CR>
set dictionary="/usr/dict/words"

let g:python_highlight_all = 1
let g:ycm_global_ycm_extra_conf = '~/ycm_files/.ycm_extra_conf.py'
let g:ycm_python_binary_path = '/usr/bin/python'
let $FZF_DEFAULT_COMMAND = 'ag -g ""'



call plug#begin('~/.vim/plugged')
Plug 'tpope/vim-tbone'
Plug 'w0rp/ale'
Plug 'octol/vim-cpp-enhanced-highlight'
Plug 'vim-python/python-syntax'
Plug 'NLKNguyen/c-syntax.vim'
Plug 'scrooloose/nerdtree'
Plug 'gabrielelana/vim-markdown'
Plug 'vim-latex/vim-latex'
Plug 'pangloss/vim-javascript'
Plug 'maxmellon/vim-jsx-pretty'
Plug 'jiangmiao/auto-pairs'
Plug 'mindriot101/vim-yapf'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'enricobacis/vim-airline-clock'
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
Plug 'morhetz/gruvbox'
Plug 'kaicataldo/material.vim'
Plug 'crusoexia/vim-monokai'
Plug 'Chiel92/vim-autoformat'
Plug 'google/vim-searchindex'


"Plug 'ajh17/VimCompletesMe'
call plug#end()
