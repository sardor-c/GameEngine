#include "hzpch.h"
#include "Application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Log.h"


namespace Hazel {

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application() = default;

	void Application::Run() {
		while (m_Running){
			m_Window->OnUpdate();
		}

	}
}