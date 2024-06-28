#include <stdio.h>
main()
{
	int i, moji;
	for (i = 0, moji = 32; moji <= 126; i++, moji++)
	{
		printf("%X %c b ", moji, ' ' + i);
		if (i % 10 == 0 && i != 0)
		{
			putchar('\n');
		}
	}
}