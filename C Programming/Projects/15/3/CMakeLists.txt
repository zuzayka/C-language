cmake_minimum_required(VERSION 3.5)

project(Pr_15_3 LANGUAGES C)

add_executable(Pr_15_3 main.c)

add_library(Pr_15_3_lib qsort.c quicksort.h; quicksort.c quicksort.h)

target_link_libraries(Pr_15_3 Pr_15_3_lib)

target_link_libraries(Pr_15_3 m)
