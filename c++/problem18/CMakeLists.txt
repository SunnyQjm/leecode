project(problem18)

add_compile_options(-g)

add_executable(problem18 main.cpp solution.cpp)

target_link_libraries(problem18 pthread gtest)

install(TARGETS problem18 RUNTIME DESTINATION ${BIN_DIR})
