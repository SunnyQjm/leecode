project(problem4)

add_compile_options(-g)

add_executable(problem4 main.cpp solution.cpp)

target_link_libraries(problem4 pthread gtest)

install(TARGETS problem4 RUNTIME DESTINATION ${BIN_DIR})
