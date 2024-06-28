#include <stdio.h>
main()
{
	float x[3][2],gokei;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (gokei = 0,j = 0; j < 2; j++)
		{
			printf("x[%d][%d] =	", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n\n", i, gokei / 2);
	}
}