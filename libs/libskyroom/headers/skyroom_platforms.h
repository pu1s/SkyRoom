#pragma once
#ifdef _WIN32
#define SKYROOM_EXPORT
#if defined SKYROOM_EXPORT
#define SKYROOM_API __declspec(dllexport)
#else SKYROOM_API __declspec(dllimport)
#endif
#endif // WIN32
