#include <stdio.h>
main()
{
	int c;//戻り値
	char dumy[256];

	c = getchar();//入力
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets(dumy);//入力バッファのクリア
		c = getchar();
	}
}