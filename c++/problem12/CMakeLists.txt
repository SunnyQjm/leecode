project(problem12)

add_compile_options(-g)

add_executable(problem12 main.cpp solution.cpp)

target_link_libraries(problem12 pthread gtest)

install(TARGETS problem12 RUNTIME DESTINATION ${BIN_DIR})
