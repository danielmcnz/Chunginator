#include "Core/Input.h"

#include "Core/Application.h"

namespace CGR
{
	int Input::KeyPressed(int keyCode)
	{
		const auto& window = Application::Get().GetWindow().GetNativeWindow();
		return glfwGetKey((GLFWwindow*)window, (int)keyCode) == GLFW_PRESS;
	}

	int Input::MouseButtonPressed(int button)
	{
		const auto& window = Application::Get().GetWindow().GetNativeWindow();
		return glfwGetMouseButton((GLFWwindow*)window, button);
	}
}