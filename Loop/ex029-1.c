#include <stdio.h>
main()
{
	int su;
	printf("数を入れて");
	scanf("%d", &su);
	while (su > 0)// su != 0はなるべく使わない
	{
		printf("*");
		su -= 1;		//su--;でも可
	}
}