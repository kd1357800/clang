#include <stdio.h>
main()
{
	int su;

	printf("10進数の数値？");
	scanf("%d", &su);
	printf("8進数 = %o\t16進数 = %x", su,su);
}