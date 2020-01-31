project(problem14)

add_compile_options(-g)

add_executable(problem14 main.cpp solution.cpp)

target_link_libraries(problem14 pthread gtest)

install(TARGETS problem14 RUNTIME DESTINATION ${BIN_DIR})
