cmake_minimum_required(VERSION 3.11.2)

project(pdfdecoder)

set (INC ${CMAKE_SOURCE_DIR}/include)
set(SRC ${CMAKE_SOURCE_DIR}/src)

include_directories(${INC})

set(SRCS
    ${SRC}/main.cpp
    )

add_executable(pdfdecoder ${SRCS})
