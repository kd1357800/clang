#include <stdio.h>
main()
{
	char moji;
	printf("1�������́H");
	moji = getchar();
	if (moji >= 'a' && moji <= 'z')
	{
		moji -= 32;
	}
	else if (moji >= 'A' && moji <= 'Z')
	{
		moji += 32;
	}
	printf("�ϊ����ʂ�%c\n", moji);
}