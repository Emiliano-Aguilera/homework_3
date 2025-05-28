cmake_minimum_required(VERSION 3.15)
project(MultiEjercicios LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Flags de compilación con todos los warnings que pediste
set(WARNING_FLAGS
    -Wall
    -Wextra
    -Wpedantic
    -Wconversion
    -Wsign-conversion
    -Wshadow
    -Wnull-dereference
    -Wdouble-promotion
    -Wformat=2
    -Wunused
    -Wduplicated-cond
    -Wduplicated-branches
    -Wlogical-op
    -Wuseless-cast
    -Woverloaded-virtual
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Wzero-as-null-pointer-constant
    -Winit-self
    -Wswitch-default
    -Wswitch-enum
    -Wcast-align
    -Wcast-qual
    -Wundef
    -Wstrict-aliasing=2
    -Wno-unused-parameter
)

add_compile_options(${WARNING_FLAGS})

# Macro para añadir cada ejercicio
function(add_ejercicio nombre carpeta)
    file(GLOB_RECURSE SRC_FILES "${carpeta}/src/*.cpp")
    include_directories("${carpeta}/include")
    add_executable(${nombre} ${SRC_FILES})
    set_target_properties(${nombre} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
endfunction()

# Lista de ejercicios
add_ejercicio(ex1 ex1)
add_ejercicio(ex2 ex2)
add_ejercicio(ex3 ex3)
