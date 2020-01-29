project(problem10)

add_compile_options(-g)

add_executable(problem10 main.cpp)

install(TARGETS problem10 RUNTIME DESTINATION ${BIN_DIR})
