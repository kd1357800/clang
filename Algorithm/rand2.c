#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice;

	srand(time(0));
	rand();
	dice = rand() % 6 + 1;//1`5‚Ì”š
	printf("ƒTƒCƒRƒ‚Í%d‚Å‚·\n", dice);
}