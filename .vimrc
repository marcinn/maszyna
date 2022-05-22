au BufRead,BufNewFile *.h set filetype=cpp
let g:c_syntax_for_h = 0
let g:ale_linters = {'cpp': ['cppcheck']}
let g:ale_fixers = {'cpp': ['clang-format']}
let g:ale_cpp_cc_options = '-std=c++17 -Wall -Iref/glad/include'
