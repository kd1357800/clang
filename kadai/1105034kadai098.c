#include <stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i, max = 0, min = 999;

	printf("�z�� data = ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
		if (data[i] > max)
		{
			max = data[i];
		}
		if (data[i] < min)
		{
			min = data[i];
		}
	}
	printf("\n�ő�l = %d\t�ŏ��l = %d", max, min);
}