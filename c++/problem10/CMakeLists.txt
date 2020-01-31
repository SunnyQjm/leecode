project(problem10)

add_compile_options(-g)

add_executable(problem10 main.cpp solution.cpp)

target_link_libraries(problem10 pthread gtest)

install(TARGETS problem10 RUNTIME DESTINATION ${BIN_DIR})
