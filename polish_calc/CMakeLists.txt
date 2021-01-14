cmake_minimum_required(VERSION 3.17)
project(polish_calc C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(polish_calc
        calc.h
        getch.c
        getop.c
        main.c
        stack.c)
