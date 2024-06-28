#include <stdio.h>
main()
{
	int su;
	printf("整数？");
	scanf("%d", &su);
	if (su % 2 == 0)
	{
		printf("その数は「偶数です」です");
	}
	else
	{
		printf("その数は「奇数です」です");
	}
}