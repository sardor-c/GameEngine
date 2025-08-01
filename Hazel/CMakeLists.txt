add_library(
        Hazel SHARED
        src/Hazel/Core.h
        src/Hazel/Application.cpp
        src/Hazel/Application.h
        src/Hazel.h
        src/Hazel/EntryPoint.h
        src/Hazel/Log.cpp
        src/Hazel/Log.h
)


target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(Hazel PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)


target_compile_definitions(Hazel PRIVATE HZ_PLATFORM_WINDOWS)
target_compile_definitions(Hazel PRIVATE HZ_BUILD_DLL)