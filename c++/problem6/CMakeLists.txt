project(problem6)

add_compile_options(-g)

add_executable(problem6 main.cpp solution.cpp)

target_link_libraries(problem6 pthread gtest)

install(TARGETS problem6 RUNTIME DESTINATION ${BIN_DIR})
