#include <stdio.h>
main()
{
	int su1, su2, su3,t;
	printf("整数を3個入力:");
	scanf("%d%d%d", &su1, &su2, &su3);
	t = su1 + su2 + su3;
	printf("合計=%d \t平均=%.2f",t,t / 3.0);
	//\tはタブ
}