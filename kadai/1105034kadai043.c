#include <stdio.h>
main()
{
	int su;

	while (su != -1)
	{
		printf("\n文字コード(-1で終了)？");
		scanf("%d", &su);
		printf("%c", ' ' + su);
	}
}