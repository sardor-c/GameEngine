#pragma once

#ifdef HZ_PLATFORM_WINDOWS



int main(int argc, char** argv) {
    Hazel::Log::Init();
    HZ_CORE_WARN("Initialize Log!");
    int a {5};
    HZ_INFO("Hello {0}", a);

    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}

#endif