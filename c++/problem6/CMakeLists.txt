project(problem6)

add_compile_options(-g)

add_executable(problem6 main.cpp)

install(TARGETS problem6 RUNTIME DESTINATION ${BIN_DIR})
