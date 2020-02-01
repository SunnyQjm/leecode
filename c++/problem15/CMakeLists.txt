project(problem15)

add_compile_options(-g)

add_executable(problem15 main.cpp solution.cpp)

target_link_libraries(problem15 pthread gtest)

install(TARGETS problem15 RUNTIME DESTINATION ${BIN_DIR})
