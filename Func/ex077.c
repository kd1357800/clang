#include <stdio.h>
void max_min(int a, int b, int c, int* max, int* min);
main()
{
	int a, b, c, max, min;

	printf("整数を3つ入力");
	scanf("%d%d%d", &a, &b,&c);
	max_min(a, b, c, &max, &min);
	printf("最大値 = %d\t最小値 = %d", max, min);
}

void max_min(int a, int b, int c, int* max, int* min)
{
	if (a > b)
	{
		if (a > c)
		{
			*max = a;
		}
		else
		{
			*max = c;
		}
		if (c > b)
		{
			*min = b;
		}
		else
		{
			*min = c;
		}
	}
	else
	{
		if (b > c)
		{
			*max = b;
		}
		else
		{
			*max = c;
		}
		if (a > c)
		{
			*min = c;
		}
		else
		{
			*min = a;
		}
	}
}