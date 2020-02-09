project(problem20)

add_compile_options(-g)

add_executable(problem20 main.cpp solution.cpp)

target_link_libraries(problem20 pthread gtest)

install(TARGETS problem20 RUNTIME DESTINATION ${BIN_DIR})
