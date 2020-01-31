project(problem9)

add_compile_options(-g)

add_executable(problem9 main.cpp solution.cpp)

target_link_libraries(problem9 pthread gtest)

install(TARGETS problem9 RUNTIME DESTINATION ${BIN_DIR})
