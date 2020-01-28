project(problem8)

add_compile_options(-g)

add_executable(problem8 main.cpp)

install(TARGETS problem8 RUNTIME DESTINATION ${BIN_DIR})
