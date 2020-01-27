project(problem3)

add_compile_options(-g)

add_executable(problem3 main.cpp)

install(TARGETS problem3 RUNTIME DESTINATION ${BIN_DIR})
