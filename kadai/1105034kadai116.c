#include <stdio.h>
main()
{
	char a[40],b[20];
	int i, j;

	printf("文字列1？");
	gets(a);
	printf("文字列2？");
	gets(b);

	for (i = 0; a[i] != '\0'; i++);

	for (j = 0; b[j] != '\0';i++, j++)
	{
		a[i] = b[j];
	}
	a[i] = '\0';
	puts(a);
}