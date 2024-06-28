#include <stdio.h>
main()
{
	int su;

	while (su != -999)
	{
		printf("\n整数(-999で入力終了)？");
		scanf("%d", &su);
		printf("8進数 = %o\t16進数 = %X", su, su);
	}
}