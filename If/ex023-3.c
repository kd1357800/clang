#include <stdio.h>
main()
{
	int en, su1, su2;
	printf("���Z�q�����:");
	scanf("%d", &en);
	printf("2�̐��������:");
	scanf("%d%d", &su1, &su2);
	if (en == 1)
	{
		printf("%d\n", su1 + su2);
	}
	else if (en == 2)
	{
		printf("%d\n", su1 - su2);
	}
	else if (en == 3)
	{
		printf("%d\n", su1 * su2);
	}
	else if (en == 4)
	{
		printf("%d\n", su1 / su2);
	}
	else
	{
		printf("1�`4�̉��Z�q����͂��Ă�������");
	}
}