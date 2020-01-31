project(problem5)

add_compile_options(-g)

add_executable(problem5 main.cpp solution.cpp)

target_link_libraries(problem5 pthread gtest)

install(TARGETS problem5 RUNTIME DESTINATION ${BIN_DIR})
