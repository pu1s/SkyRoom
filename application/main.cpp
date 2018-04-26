#include <iostream>
#include <cstdlib>
#include <memory>


#include "../libs/libskyroom/include/libskyroom.h"
#pragma comment(lib, "libskyroom.lib")



using namespace skyroom;
int main()
{
	sexagesimal* sga;
	sga = (sexagesimal*)calloc(10, sizeof(sexagesimal));
	int * countptr = NULL;
	int count = 15;
	countptr = &count;
	sga = (sexagesimal*)realloc(sga, 15 * sizeof(sexagesimal));
	for (int i = 0; i < 15; i++)
	{
		printf("Item number %d: %d\n\r", i, sga[i]);
	}
	sexagesimal * sg = new sexagesimal();
	printf("%d", sg->get_value());
	delete sg;
	sg = nullptr;
	system("pause");
	return 0;
}