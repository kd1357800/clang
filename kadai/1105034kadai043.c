#include <stdio.h>
main()
{
	int su;

	while (su != -1)
	{
		printf("\n�����R�[�h(-1�ŏI��)�H");
		scanf("%d", &su);
		printf("%c", ' ' + su);
	}
}