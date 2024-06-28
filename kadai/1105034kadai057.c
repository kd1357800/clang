#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット大文字？");
	moji = getchar();

	for (int i = 0; (moji + i) <= 'Z'; i++)
	{
		printf("%c ", moji + i);
	}
}