#include <stdio.h>
main()
{
	int su1, su2;

	printf("�����P�H");
	scanf("%d", &su1);
	printf("�����Q�H");
	scanf("%d", &su2);
	if (su1 > su2)
	{
		printf("%d�̕���%d���%d�傫��", su1, su2, su1 - su2);
	}
	else if (su1 < su2)
	{
		printf("%d�̕���%d���%d������", su1, su2, su2 - su1);
	}
	else if (su1 == su2)
	{
		printf("%d��%d�͓�����", su1, su2);
	}
}