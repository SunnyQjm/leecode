project(problem22)

add_compile_options(-g)

add_executable(problem22 main.cpp solution.cpp)

target_link_libraries(problem22 pthread gtest)

install(TARGETS problem22 RUNTIME DESTINATION ${BIN_DIR})
