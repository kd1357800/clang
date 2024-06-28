#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int omikuji;

	srand(time(0));
	rand();
	omikuji = rand() % 5;
	switch (omikuji)
	{
	case 0 :
		printf("‘å‹g");
		break;
	case 1:
		printf("‹g");
		break;
	case 2:
		printf("’†‹g");
		break;
	case 3:
		printf("¬‹g");
		break;
	case 4:
		printf("‹¥");
		break;
	default:
		break;
	}
}