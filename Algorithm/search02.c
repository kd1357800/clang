#include <stdio.h>
main()
{
	int d[11] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, s;

	printf("�T���l�����>");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; d[i] != s; i++)
	{

	}
	if (i >= 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("%d�ԖڂɌ�������", i + 1);
	}
}