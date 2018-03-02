#include<iostream>

#ifdef WIN32
#include <cstdlib>
#endif // WIN32

#pragma comment(lib, "libskyroom.lib")

#include "libs/libskyroom/headers/skyroom.h"


using namespace std;

int main()
{
	DMS dms;
	cout << "Hello Skyroom!!!" << endl;
#ifdef WIN32
	system("pause");
#endif // WIN32
	return 0;
}