#pragma once
#include "MACRO.h"

namespace GGB
{
	class GGB_API Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in Game
	Application* CreateApplication();
}