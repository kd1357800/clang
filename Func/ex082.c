#include <stdio.h>
#include <string.h>
#define SIZE 8
void sort(int* array, int order);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 }, i;
	char str[256];

	printf("ソート方向を入力：");
	gets(str);
	if (strcmp(str, "昇順"))
	{
		sort(data, 0);
		for (i = 0; i < SIZE; i++)
		{
			printf("%d ", data[i]);
		}
	}
	else if (strcmp(str, "降順")
	{
		sort(data, 1);
		for (i = 0; i < SIZE; i++)
		{
			printf("%d ", data[i]);
		}
	}
	else
	{
		printf("エラー");
	}
}

void sort(int* array, int order)
{
	int i, j, w;
	if (order == 0)
	{
		for (i = 1; i < SIZE; i++)
		{
			for (j = i + 1; j < SIZE; j++)
			{
				if (1 == strcmp(*(array + i)),(*(array + ij))
				{
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
	}
	else if (order == 1)
	{
		int i, j, w;
		for (i = 1; i < SIZE; i++)
		{
			for (j = i + 1; j < SIZE; j++)
			{
				if (-1 == strcmp(*(array + i)), (*(array + ij))
				{
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
	}
}