project(problem19)

add_compile_options(-g)

add_executable(problem19 main.cpp solution.cpp)

target_link_libraries(problem19 pthread gtest)

install(TARGETS problem19 RUNTIME DESTINATION ${BIN_DIR})
