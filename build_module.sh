CPPM_NAME="merge_sort"
MODULE_NAME="MergeSort"
CXX="clang++ -fmodules-ts -std=c++2a"
$CXX --precompile $CPPM_NAME.cppm -o $MODULE_NAME.pcm
$CXX -c $MODULE_NAME.pcm -o $MODULE_NAME.o
$CXX -o main.o -fprebuilt-module-path=. $MODULE_NAME.o main.cpp