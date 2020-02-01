project(problem16)

add_compile_options(-g)

add_executable(problem16 main.cpp solution.cpp)

target_link_libraries(problem16 pthread gtest)

install(TARGETS problem16 RUNTIME DESTINATION ${BIN_DIR})
