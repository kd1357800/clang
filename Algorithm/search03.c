#include <stdio.h>
main()
{
	int low, mid, high, s, d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	low = 0;
	high = 10;

	printf("�T���l����́�");
	scanf("%d", &s);

	while (low <= high)//������܂ōŌ�܂ł̏�����
	{
		mid = (low + high) / 2;

		if (s == d[mid])break;//�T���l������������

		if (s > d[mid]){low = mid + 1;}//mid���T���l���傫��������

		if (s < d[mid]){high = mid - 1;}//mid���T���l��������������
	}
	
	if (low > high)//�Ō�܂ŒT�������ۂ�
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("%d�ԖڂɌ�������",mid + 1);
	}
}