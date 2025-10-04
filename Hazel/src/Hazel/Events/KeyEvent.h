#pragma once

#include <sstream>
#include "Hazel/Events/Events.h"


namespace Hazel {

	class HAZEL_API KeyEvent : public Event {
		public:
			inline int GeTKeyCode() const { return m_KeyCode; }
			EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)

		protected:
			KeyEvent(int keycode) : m_KeyCode(keycode) {}
			int m_KeyCode;
	};


	class HAZEL_API KeyPressedEvent : public KeyEvent {
		public:
			KeyPressedEvent(int keycode, int repeatCount) : KeyEvent(keycode), m_RepeatedCount(repeatCount) {}
			inline int GetRepeatedCount() const { return m_RepeatedCount; }

			std::string ToString() const override {
				std::stringstream ss;
				ss << "KeyPressedEvent: " << m_KeyCode << " (" << m_RepeatedCount << " repeats)";
				return ss.str();
			}

			EVENT_CLASS_TYPE(KeyPressed)
		private:
			int m_RepeatedCount;
	};

	class HAZEL_API KeyReleasedEvent : public KeyEvent {
		public:
			KeyReleasedEvent(int keycode) : KeyEvent(keycode) {}

			std::string ToString() const override {
				std::stringstream ss;
				ss << "KeyReleasedEvent: " << m_KeyCode;
				return ss.str();
			}

			EVENT_CLASS_TYPE(KeyReleased)
	};


}

