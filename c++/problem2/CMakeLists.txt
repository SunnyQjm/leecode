project(problem2)

add_compile_options(-g)

add_executable(problem2 main.cpp solution.cpp)

target_link_libraries(problem2 pthread gtest)

install(TARGETS problem2 RUNTIME DESTINATION ${BIN_DIR})

