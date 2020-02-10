project(problem21)

add_compile_options(-g)

add_executable(problem21 main.cpp solution.cpp)

target_link_libraries(problem21 pthread gtest)

install(TARGETS problem21 RUNTIME DESTINATION ${BIN_DIR})
