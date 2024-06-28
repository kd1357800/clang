#include <stdio.h>
main()
{
	int i = 21;
	while (i-- > 1)
	{
		if (i % 10 == 0) { putchar('\n'); }
		printf("%3d", i);
	}
}