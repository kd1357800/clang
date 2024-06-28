#include <stdio.h>
main()
{
	char moji[30];
	int i = 0;

	printf("•¶š—ñ‚ÍH");
	gets(moji);

	for (i = 0; moji[i] != '\0'; i++)
	{
		putchar(moji[i]);
		putchar('\n');
	}
	
}