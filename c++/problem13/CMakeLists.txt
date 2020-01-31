project(problem13)

add_compile_options(-g)

add_executable(problem13 main.cpp solution.cpp)

target_link_libraries(problem13 pthread gtest)

install(TARGETS problem13 RUNTIME DESTINATION ${BIN_DIR})
