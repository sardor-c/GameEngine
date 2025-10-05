#pragma once

#include "Hazel/Window.h"

#include <GLFW/glfw3.h>


namespace Hazel {


	class WindowsWindow : public Window {
		public:
			explicit WindowsWindow(const WindowProps &props);
			virtual ~WindowsWindow();

			void OnUpdate() override;

			inline unsigned int GetWidth() const override { return m_Data.Width; }
			inline unsigned int GetHeight() const override { return m_Data.Height; }

			// Window attributes
			inline void
			SetEventCallback(const EventCallbackFunc &callback) override { m_Data.EventCallback = callback; }
			void SetVSync(bool enabled) override;
			bool IsVSync() const override;
		private:
			virtual void Init(const WindowProps &props);
			virtual void Shutdown();
		private:
			GLFWwindow *m_Window{};

			struct WindowData {
				std::string TItle;
				unsigned int Width, Height;
				bool VSync;

				EventCallbackFunc EventCallback;
			};

			WindowData m_Data;

	};

}
