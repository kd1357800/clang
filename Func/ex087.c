#include <stdio.h>
#include <stdlib.h>
main(int su,char *moji[])
{
	int sum;
	if (su == 3)
	{
		sum = atoi(moji[1]) + atoi(moji[2]);
		printf("%d + %d = %d", atoi(moji[1]), atoi(moji[2]),sum);
	}
	else
	{
		printf("ÉGÉâÅ[");
	}
}