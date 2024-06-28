#include <stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 }, max, min, i;
	int* p_data;
	p_data = data;

	printf("配列の内容\ndata[] = ");
	for (i = 0, max = -999, min = 999; i < 9; i++)
	{
		printf("%d, ", *(p_data + i));
		if (max < *(p_data + i))
		{
			max = *(p_data + i);
		}

		if (min > *(p_data + i))
		{
			min = *(p_data + i);
		}
	}
	printf("\n最大値 = %d", max);
	printf("\n最小値 = %d", min);
}