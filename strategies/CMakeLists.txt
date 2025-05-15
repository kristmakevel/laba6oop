add_library(bubble INTERFACE bubble_sort.hpp)
add_library(sorter INTERFACE sorter.hpp)
add_library(quick INTERFACE quick_sort.hpp)
add_library(sorting INTERFACE sorting.hpp)
add_library(std INTERFACE std_sort.hpp)
add_library(insertion INTERFACE insertion_sort.hpp)

add_executable(main main.cpp)