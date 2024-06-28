#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		//大文字を小文字にする処理
		printf("変換すると:%c\n", moji + 32);
	}
	else if (moji >= 'a' && moji <= 'z')
	{
		//小文字を大文字にする処理
		printf("変換すると:%c\n", moji - 32);
	}
	else
	{
		//アルファベットじゃないときの処理
		printf("アルファベットではありません");
	}
}