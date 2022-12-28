add_subdirectory(lib/googletest EXCLUDE_FROM_ALL)

set(SOURCE_FILES src/{{cookiecutter.library_name}}/sample_test.cpp)

add_executable({{cookiecutter.library_name}}_tests ${SOURCE_FILES})

target_link_libraries(
    {{cookiecutter.library_name}}_tests PRIVATE
    {{cookiecutter.library_name}}
    GTest::gtest_main project_compiler_flags)

include(GoogleTest)
gtest_discover_tests({{cookiecutter.library_name}}_tests)
