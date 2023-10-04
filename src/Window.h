#pragma once

#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
namespace Wrappers
{
	class Window
	{
	public:

		Window(int w, int h, std::string name);
		Window(const Window& window) = delete;
		~Window();
		Window& operator=(const Window&) = delete;

		bool StayOpen() { return !glfwWindowShouldClose(window); }

	private:

		GLFWwindow* window;
		const int width;
		const int height;
		std::string windowName;

		void Initialize();
	};
}
