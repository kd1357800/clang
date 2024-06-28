#include <stdio.h>
main()
{
	int i = 0, t = 0;
	do
	{
		i++;
		t += i;
		printf("%d",i);
		if (t > 300)break;
		printf("+");
	} while (t <= 300);
	printf("=%d", t);
}