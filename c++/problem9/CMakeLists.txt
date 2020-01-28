project(problem9)

add_compile_options(-g)

add_executable(problem9 main.cpp)

install(TARGETS problem9 RUNTIME DESTINATION ${BIN_DIR})
