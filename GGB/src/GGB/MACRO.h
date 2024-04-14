
#ifdef GGB_PLATFORM_WINDOWS
	#ifdef GGB_BUILD_DLL
		#define GGB_API __declspec(dllexport)
	#else 
		#define GGB_API __declspec(dllimport)
	#endif 
#else
	#error Only windows support is present
#endif