#include <stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�啶���H");
	moji = getchar();

	for (int i = 0; (moji + i) <= 'Z'; i++)
	{
		printf("%c ", moji + i);
	}
}