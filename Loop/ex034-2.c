#include <stdio.h>
main()
{
	int i, j;
	printf("”‚Í?");
	scanf("%d", &i);
	do
	{
		j = 5;
		do
		{
			printf("*");
			j--;
		} while (j > 0);
		printf("\n");
		i--;
	} while (i > 0);
}