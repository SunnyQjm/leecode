project(problem5)

add_compile_options(-g)

add_executable(problem5 main.cpp)

install(TARGETS problem5 RUNTIME DESTINATION ${BIN_DIR})
