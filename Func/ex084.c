#include <stdio.h>
void strcnt(char* str1, char* str2);

main()
{
	char str1[256];
	char str2[256];

	printf("•¶š—ñHF");
	gets(str1);
	printf("str1:%s\n", str1);
	strcnt(str1, str2);
	printf("str1:%s\n", str2);
}

void strcnt(char* str1, char* str2)
{
	int i, j;
	
	for (i = 0; *(str1 + i) != '\0'; i++);
	i--;
	for (j = 0; i >= 0; i--, j++)
	{
		*(str2 + j) = *(str1 + i);
	}
	*(str2 + j) = '\0';
}