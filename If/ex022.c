#include <stdio.h>
main()
{
	int bd;
	printf("西暦を入力:");
	scanf("%d", &bd);
	if (bd >= 2019)
	{
		printf("令和生まれです");
	}
	else if (bd >= 1989)
	{
		printf("平成生まれです");
	}
	else if (bd >= 1926)
	{
		printf("昭和生まれです");
	}
	else
	{
		printf("大正生まれです");
	}
}