project(problem17)

add_compile_options(-g)

add_executable(problem17 main.cpp solution.cpp)

target_link_libraries(problem17 pthread gtest)

install(TARGETS problem17 RUNTIME DESTINATION ${BIN_DIR})
