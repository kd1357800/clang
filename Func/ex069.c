#include <stdio.h>
main()
{
	int ret;//戻り値
	int data, sum = 0,cnt = 0;

	printf("整数：");

	ret = scanf("%d", &data);
	while (ret != EOF)
	{
		sum += data;
		cnt++;
		printf("整数：");
		ret = scanf("%d", &data);
	}
	printf("合計=%d\t平均=%.2f\n", sum, (float)sum / cnt);
}