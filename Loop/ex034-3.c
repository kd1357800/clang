#include <stdio.h>
main()
{
	int su, i = 0, j;
	printf("”‚ÍH");
	scanf("%d", &su);
	do
	{
		j = 0;
		do
		{
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < su);
}