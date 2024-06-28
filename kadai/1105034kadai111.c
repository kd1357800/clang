#include <stdio.h>
main()
{
	char moji[] = "abcde";
	int i;

	for (i = 0; moji[i] != '\0'; i++)
	{
		printf("%c", moji[i]);
	}
}