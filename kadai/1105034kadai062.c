#include <stdio.h>
main()
{
	int i = 20;
	do
	{
		if (i % 10 == 0) { putchar('\n'); }
		printf("%3d",i);
	} while (i-- > 1);
}