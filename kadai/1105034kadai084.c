#include <stdio.h>
main()
{
	int su1, su2;
	while (1)
	{
		printf("\n整数１(-999で終了)？");
		scanf("%d", &su1);
		printf("\n整数２(-999で終了)？");
		scanf("%d", &su2);
		if (su1 == -999 || su1 == -999)break;
		printf("%d / %d = %d あまり%d", su1, su2, su1 / su2, su1 % su2);
	}
}