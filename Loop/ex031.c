#include <stdio.h>
main()
{
	int su, t;
	for (su = 1, t = 0; su <= 10;su++ )//複数の初期値を書きたい場合カンマで区切る
	{
		t += su;
		printf("1から%dまでの和 = %d\n", su,t);
	}
}