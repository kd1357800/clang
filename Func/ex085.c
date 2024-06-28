#include <stdio.h>
void renketu(char* a, char* b);
main()
{
	char a[10];
	char b[10];

	printf("”z—ña:");
	gets(a);
	printf("”z—ñb:");
	gets(b);
	renketu(a, b);
	puts(a);
}
/*
void renketu(char* a, char* b)
{
	while (a++ == '\0');
	while (a++ = b++);
}*/

void renketu(char* a, char* b)
{
	int i, j;
	for (i = 0; *(a + i) != '\0'; i++);

	for (j = 0; *(a + i) = *(b + j); i++, j++);
}