#include <stdio.h>
main()
{
	char moji1, moji2, moji3,moji4;
	moji1 = 'A';
	moji2 = 'a';
	moji3 = '0';
	moji4 = ' ';
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji1, moji1, moji1, moji1 + 1, moji1 + 1, moji1 + 1);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji1 + 2, moji1 + 2, moji1 + 2, moji2, moji2, moji2);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji2 + 1, moji2 + 1, moji2 + 1, moji2 + 2, moji2 + 2, moji2 + 2);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji3, moji3, moji3, moji3 + 1, moji3 + 1, moji3 + 1);
	printf("%c: %d 0x%x   %c: %d 0x%x \n", moji3 + 2, moji3 + 2, moji3 + 2, moji4, moji4, moji4);
}