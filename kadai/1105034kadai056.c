#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット小文字？");
	moji = getchar();

	for (int i = 0; (moji + i) <= 'z'; i++)
	{
		printf("%c ", moji + i);
	}
}