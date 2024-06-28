#include <stdio.h>
main()
{
	int su1, su2, * p1, * p2;
	su1 = 100;
	su2 = 10;

	p1 = &su1;
	p2 = &su2;

	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
	printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
	printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2);
	printf("%d / %d = %d\n", *p1, *p2, *p1 / *p2);
}