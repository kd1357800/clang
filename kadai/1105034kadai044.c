#include <stdio.h>
main()
{
	int su;

	while (su != -999)
	{
		printf("\n����(-999�œ��͏I��)�H");
		scanf("%d", &su);
		printf("8�i�� = %o\t16�i�� = %X", su, su);
	}
}