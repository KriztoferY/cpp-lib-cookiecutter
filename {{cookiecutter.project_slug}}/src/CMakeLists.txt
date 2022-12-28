add_subdirectory({{cookiecutter.library_name}})
set(SOURCE_FILES demo.cpp)

add_executable({{cookiecutter.library_name}}_demo ${SOURCE_FILES})
set_target_properties({{cookiecutter.library_name}}_demo PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

target_include_directories({{cookiecutter.library_name}}_demo PUBLIC
                           "${PROJECT_BINARY_DIR}"      # ProjectConfig.h 
                           )

target_link_libraries({{cookiecutter.library_name}}_demo PUBLIC {{cookiecutter.library_name}} project_compiler_flags)

install(TARGETS {{cookiecutter.library_name}}_demo DESTINATION ${APP_INSTALL_BIN_DIR})
install(
    FILES "${PROJECT_BINARY_DIR}/ProjectConfig.h" 
    DESTINATION ${APP_INSTALL_INCLUDE_DIR}
  )