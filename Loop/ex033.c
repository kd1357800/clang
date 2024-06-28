#include <stdio.h>
main()
{
	int su = 0, t = 0, kai = -1;
	do
	{
		t += su;
		printf("数は？");
		scanf("%d", &su);
		kai++;
	} while (su != -999);
	printf("合計＝%d\t平均＝%.2f\n", t, (float)t / kai);//計算の数字の前に(float)を入れることで型変換をして実数を出せる
}
