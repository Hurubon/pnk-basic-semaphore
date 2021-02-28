cmake_minimum_required(VERSION 3.5)
project(pnk-basic-semaphore VERSION 0.1)

set(library-source
	inc/pnk/basic_semaphore.h
	src/basic_semaphore.c
)

add_library(pnk-basic-semaphore INTERFACE)
target_include_directories(pnk-basic-semaphore INTERFACE inc)
target_include_directories(pnk-basic-semaphore INTERFACE lib)
target_compile_features   (pnk-basic-semaphore INTERFACE c_std_11)

add_executable(init_test tests/init_test.c ${library-source})

target_link_libraries(init_test PRIVATE pnk-basic-semaphore)