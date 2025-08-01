add_executable(
        Sandbox
        src/Sandbox.cpp
)

target_link_libraries(Sandbox PRIVATE Hazel)

target_include_directories(Sandbox PRIVATE ${CMAKE_SOURCE_DIR}/Hazel)

target_compile_definitions(Sandbox PRIVATE HZ_PLATFORM_WINDOWS)

add_custom_command(
        TARGET Sandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Hazel>
        $<TARGET_FILE_DIR:Sandbox>
)