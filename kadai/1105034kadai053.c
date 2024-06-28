#include <stdio.h>
main()
{
	int su;
	printf("®”H");
	scanf("%d", &su);
	for (int i = 0; i <= 10; i++)
	{
		printf("%d ", su + i);
	}
}