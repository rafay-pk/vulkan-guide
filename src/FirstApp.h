#pragma once

#include "Window.h"

namespace Applications
{
	class FirstApp
	{
	public:

		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void Run();

	private:

		Wrappers::Window window{ WIDTH, HEIGHT, "Hello Vulkan!" };

	};
}
