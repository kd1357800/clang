#include <stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�������H");
	moji = getchar();

	for (int i = 0; (moji + i) <= 'z'; i++)
	{
		printf("%c ", moji + i);
	}
}