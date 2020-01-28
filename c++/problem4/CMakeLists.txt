project(problem4)

add_compile_options(-g)

add_executable(problem4 main.cpp)

install(TARGETS problem4 RUNTIME DESTINATION ${BIN_DIR})
