set(INCLUDE_FILES [FIXME: FILL IN HEADER FILES])

set(SOURCE_FILES [FIXME: FILL IN SOURCE FILES])

add_library({{cookiecutter.library_name}} SHARED STATIC ${INCLUDE_FILES} ${SOURCE_FILES})
set_property(TARGET {{cookiecutter.library_name}} PROPERTY VERSION "0.1.0")
set_property(TARGET {{cookiecutter.library_name}} PROPERTY SOVERSION "1")

# Make all subprojects not having to include the library
# using target_include_directories()
target_include_directories({{cookiecutter.library_name}}
                           INTERFACE
                            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
                            $<INSTALL_INTERFACE:${APP_INSTALL_INCLUDE_DIR}>
                           )

install(FILES ${INCLUDE_FILES} DESTINATION ${APP_INSTALL_INCLUDE_DIR})