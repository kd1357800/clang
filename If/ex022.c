#include <stdio.h>
main()
{
	int bd;
	printf("��������:");
	scanf("%d", &bd);
	if (bd >= 2019)
	{
		printf("�ߘa���܂�ł�");
	}
	else if (bd >= 1989)
	{
		printf("�������܂�ł�");
	}
	else if (bd >= 1926)
	{
		printf("���a���܂�ł�");
	}
	else
	{
		printf("�吳���܂�ł�");
	}
}