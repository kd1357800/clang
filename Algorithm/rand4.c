#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un;

	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("ç°ì˙ÇÃÇ†Ç»ÇΩÇÃâ^ê®ÇÕÅA");
	while (un > 0)
	{
		printf("Åô ");
		un--;
	}
	printf(" Ç≈Ç∑ÅB");
}