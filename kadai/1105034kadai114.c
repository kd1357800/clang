#include <stdio.h>
main()
{
	char moji[30];
	int i;

	printf("文字列は？");
	scanf("%s", &moji[0]);

	for (i = 0; moji[i] != '\0'; i++)
	{

	}

	printf("文字列 : %s\t", &moji[0]);
	printf("文字数 = %d文字", i);
}