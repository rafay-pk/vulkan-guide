#include "FirstApp.h"

namespace Applications
{
	void FirstApp::Run()
	{
		while (window.StayOpen())
		{
			glfwPollEvents();
		}
	}
}