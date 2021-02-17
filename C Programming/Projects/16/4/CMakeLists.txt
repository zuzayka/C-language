cmake_minimum_required(VERSION 3.5)

project(Pr_16_4a LANGUAGES C)

add_executable(Pr_16_4a inventory.c)

add_library(Pr_16_4a_lib readline.c readline.h)

target_link_libraries(Pr_16_4a Pr_16_4a_lib)

target_link_libraries(Pr_16_4a m)
