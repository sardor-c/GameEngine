#pragma once


#ifdef HZ_PLATFORM_WINDOWS


int main(int argc, char **argv) {
	auto application = Hazel::CreateApplication();
	application->Run();
	delete application;
}

#endif