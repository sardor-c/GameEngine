add_library(
        Hazel SHARED
        src/Hazel/Core.h
        src/Hazel/Application.cpp
        src/Hazel/Application.h
        src/Hazel.h
        src/Hazel/Events/Events.h
        src/Hazel/Events/ApplicationEvent.h
        src/Hazel/Events/KeyEvent.h
        src/Hazel/Events/MouseEvent.h
        src/Hazel/EntryPoint.h
        src/Hazel/Log.cpp
        src/Hazel/Log.h
        src/hzpch.h
        src/hzpch.cpp
        src/Hazel/Window.h
        src/Platform/Windows/WindowsWindow.cpp
        src/Platform/Windows/WindowsWindow.h
)
add_subdirectory(vendor/GLFW)
target_link_libraries(Hazel PUBLIC glfw)

target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)
target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include)


target_compile_definitions(Hazel PRIVATE HZ_PLATFORM_WINDOWS)
target_compile_definitions(Hazel PRIVATE HZ_BUILD_DLL)
target_compile_definitions(Hazel PRIVATE HZ_ENABLE_ASSERTS)