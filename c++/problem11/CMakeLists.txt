project(problem11)

add_compile_options(-g)

add_executable(problem11 main.cpp solution.cpp)

target_link_libraries(problem11 pthread gtest)

install(TARGETS problem11 RUNTIME DESTINATION ${BIN_DIR})
