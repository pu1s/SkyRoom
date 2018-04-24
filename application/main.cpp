#include <iostream>
#include <cstdlib>


#include "../libs/libskyroom/include/libskyroom.h"
#pragma comment(lib, "libskyroom.lib")



using namespace skyroom;
int main()
{
	sexagesimal * sg = new sexagesimal();
	printf("%d", sg->get_value());
	delete sg;
	sg = nullptr;
	system("pause");
	return 0;
}