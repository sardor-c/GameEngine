#pragma once

#ifdef HZ_PLATFORM_WINDOWS

int main(int argc, char **argv) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	auto application = Hazel::CreateApplication();
	application->Run();
	delete application;
}

#endif