#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un;

	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	while (un > 0)
	{
		printf("☆ ");
		un--;
	}
	printf(" です。");
}