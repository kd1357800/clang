#include <stdio.h>
main()
{
	char moji;
	printf("1•¶Žš“ü—ÍH");
	moji = getchar();
	if (moji >= 'a' && moji <= 'z')
	{
		moji -= 32;
	}
	else if (moji >= 'A' && moji <= 'Z')
	{
		moji += 32;
	}
	printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", moji);
}