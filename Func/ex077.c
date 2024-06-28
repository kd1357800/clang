#include <stdio.h>
void max_min(int a, int b, int c, int* max, int* min);
main()
{
	int a, b, c, max, min;

	printf("®”‚ğ3‚Â“ü—Í");
	scanf("%d%d%d", &a, &b,&c);
	max_min(a, b, c, &max, &min);
	printf("Å‘å’l = %d\tÅ¬’l = %d", max, min);
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