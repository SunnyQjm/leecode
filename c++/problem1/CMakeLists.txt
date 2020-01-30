project(problem1)

add_compile_options(-g)

add_executable(problem1 main.cpp solution.cpp)

target_link_libraries(problem1 pthread gtest)

install(TARGETS problem1 RUNTIME DESTINATION ${BIN_DIR})

