cmake_minimum_required(VERSION 3.5)

project(Pr_15_2 LANGUAGES C)

add_executable(Pr_15_2 main.c)

add_library(Pr_15_2_lib line.c line.h; word.c word.h)

target_link_libraries(Pr_15_2 Pr_15_2_lib)

target_link_libraries(Pr_15_2 m)
