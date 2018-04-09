#include <iostream>
#include <cstdlib>

#include "../libs/libskyroom/include/libskyroom.h"
#pragma comment(lib, "libskyroom.lib")



using namespace skyroom;
int main()
{
	hms __hms;
	sexagesimal_tag * sg = new sexagesimal(0.999);
	std::cout << "Hello skyroom!" << sg->get_value() << std::endl;
	system("pause");
	return 0;
}