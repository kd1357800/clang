#include <stdio.h>
main()
{
	int su;
	char moji;

	printf("10�i���̐����H");
	scanf("%d", &su);
	printf("�A���t�@�x�b�g(o or h or d)?");
	scanf("%*c%c", &moji);

	switch (moji)
	{
	case 'o':
	case 'O':
		printf("%o", su);
		break;
	case 'h':
	case 'H':
		printf("%x", su);
		break;
	default:
		printf("%d", su);
		break;
	}
}