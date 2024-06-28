#include <stdio.h>
main()
{
	for (int i = 0; ('A' + i) <= 'Z'; i++)
	{
		printf("%c ", 'A' + i);
	}
}