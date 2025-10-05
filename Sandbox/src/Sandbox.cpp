#include <iostream>
#include "Hazel.h"


class Sandbox : public Hazel::Application {
	public:
		Sandbox() = default;
		~Sandbox() override {
			std::cout << " delete";
		}
};

extern "C" Hazel::Application *Hazel::CreateApplication() {
	return new Sandbox();
}