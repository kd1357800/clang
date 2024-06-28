#include <stdio.h>
main()
{
	char c;
	char* c_p;
	c_p = &c;

	printf("1•¶š“ü—ÍH");
	c = getchar();

	putchar(*c_p + 1);
}