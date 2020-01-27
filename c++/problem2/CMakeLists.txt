project(problem2)

add_compile_options(-g)

add_executable(problem2 main.cpp)

install(TARGETS problem2 RUNTIME DESTINATION ${BIN_DIR})
