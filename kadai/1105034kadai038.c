#include <stdio.h>
main()
{
	char moji;
	printf("1文字入力？");
	moji = getchar();
	if (moji >= 'a' && moji <= 'z')
	{
		moji -= 32;
	}
	else if (moji >= 'A' && moji <= 'Z')
	{
		moji += 32;
	}
	printf("変換結果は%c\n", moji);
}