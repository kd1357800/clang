#include <stdio.h>
main()
{
	int su1, su2;
	while (1)
	{
		printf("\n�����P(-999�ŏI��)�H");
		scanf("%d", &su1);
		printf("\n�����Q(-999�ŏI��)�H");
		scanf("%d", &su2);
		if (su1 == -999 || su1 == -999)break;
		printf("%d / %d = %d ���܂�%d", su1, su2, su1 / su2, su1 % su2);
	}
}