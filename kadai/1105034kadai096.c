#include <stdio.h>
main()
{
	int c[10];
	int su, i, j;

	for (i = 0; 1; i++)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &su);
		if (su == -999) break;
		c[i] = su;
	}
	
	printf("�z�� c = ");
	for (j = 0; j < i; j++)
	{
		printf("%d  ", c[j]);
	}
}