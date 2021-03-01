cmake_minimum_required(VERSION 3.5)
project(pnk-basic-semaphore VERSION 0.2)

set(library-source
	inc/pnk/basic_semaphore.h
	src/basic_semaphore.c
)

add_library(pnk-basic-semaphore STATIC ${library-source})

add_executable(
	pnk_basic_semaphore_initial_test 
	tests/pnk_basic_semaphore_initial_test.c
	${library-source}
)

target_include_directories(pnk-basic-semaphore PUBLIC inc)
target_compile_features   (pnk-basic-semaphore PUBLIC c_std_11)

target_link_libraries(
	pnk_basic_semaphore_initial_test
	PRIVATE
	pnk-basic-semaphore
)