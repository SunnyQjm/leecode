project(problem3)

add_compile_options(-g)

add_executable(problem3 main.cpp solution.cpp)

target_link_libraries(problem3 pthread gtest)

install(TARGETS problem3 RUNTIME DESTINATION ${BIN_DIR})

