#include <stdio.h>
main()
{
	char c;
	char* c_p;
	c_p = &c;

	printf("1文字入力？");
	c = getchar();

	putchar(*c_p + 1);
}