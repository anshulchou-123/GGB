#pragma once

#ifdef GGB_PLATFORM_WINDOWS
extern GGB::Application* GGB::CreateApplication();
int main()
{
	auto app = new GGB::Application();
	app->Run();
	delete app;
}

#endif