#include <stdio.h>
main()
{
	int su,by;
	printf("��������:");
	scanf("%d", &su);
	for (by = 1; by <= 5; by++)//0�������l�ɂ������ꍇ��printf�̎���by�Ɂ{1����
	{
		printf("%d ", su * by);
	}
}