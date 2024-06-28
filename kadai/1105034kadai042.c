#include <stdio.h>
main()
{
	int i = 0, t = 0;

	while (1)
	{
		i++;
		t += i;
		printf("%d", i);
		if (t > 300) break;
		putchar('+');
	}
	printf("=%d", t);
}