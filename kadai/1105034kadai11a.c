#include <stdio.h>
#define MOJI 3
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < MOJI; j++)
		{
			putchar(day[i][j]);
		}
		putchar('\n');
	}
}