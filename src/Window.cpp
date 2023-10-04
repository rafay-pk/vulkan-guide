#include "Window.h"

namespace Wrappers 
{
	Window::Window(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name }
	{
		Initialize();
	}

	Window::~Window() 
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void Window::Initialize()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}

}