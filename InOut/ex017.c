#include <stdio.h>
main()
{
	float su1, su2, su3;
	printf("１つ目の整数 : ");
	scanf("%f", &su1);
	printf("2つ目の整数 : ");
	scanf("%f", &su2);
	printf("3つ目の整数 : ");
	scanf("%f", &su3);
	printf("合計= %.2f 平均= %.2f", su1 + su2 + su3, (su1 + su2 + su3) / 3);
}