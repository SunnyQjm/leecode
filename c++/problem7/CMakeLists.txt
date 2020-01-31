project(problem7)

add_compile_options(-g)

add_executable(problem7 main.cpp solution.cpp)

target_link_libraries(problem7 pthread gtest)

install(TARGETS problem7 RUNTIME DESTINATION ${BIN_DIR})
