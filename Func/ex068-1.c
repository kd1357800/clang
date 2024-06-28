#include <stdio.h>
main()
{
	int c;//戻り値
	char dumy[256];
	char data1,data2;

	c = scanf("%c%c",&data1,&data2);
	while (c != EOF)
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data1, &data2);
	}
	printf("%d\n", printf("HELLO"));//5文字なので5が表示させる
	printf("%d\n", printf("こんにちは"));//全角は2バイトだから10が出る
}