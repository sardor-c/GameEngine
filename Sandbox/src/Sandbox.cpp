#include "Hazel.h"


class Sandbox : public Hazel::Application {
	public:
		Sandbox() = default;
		~Sandbox() override = default;
};

int main() {
	Sandbox *sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}