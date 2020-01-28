project(problem7)

add_compile_options(-g)

add_executable(problem7 main.cpp)

install(TARGETS problem7 RUNTIME DESTINATION ${BIN_DIR})
