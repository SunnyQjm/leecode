project(problem8)

add_compile_options(-g)

add_executable(problem8 main.cpp solution.cpp)

target_link_libraries(problem8 pthread gtest)

install(TARGETS problem8 RUNTIME DESTINATION ${BIN_DIR})
