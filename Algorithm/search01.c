#include <stdio.h>
main()
{
	int d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, s;

	printf("�T���l�����>");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (d[i] == s)break;
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