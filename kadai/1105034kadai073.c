#include <stdio.h>
main()
{
	int su;
	char moji;

	printf("10進数の整数？");
	scanf("%d", &su);
	printf("アルファベット(o or h or d)?");
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