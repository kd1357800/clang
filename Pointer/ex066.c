#include <stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstation4" };
	char** p;
	int i;
	p = p_game;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *p++);
	}
}