#include <stdio.h>
main()
{
	int su1, su2;
	char en;

	printf("����1�H");
	scanf("%d", &su1);
	printf("����2�H");
	scanf("%d", &su2);
	printf("���Z�q�H");
	scanf("%*c%c", &en);//ENTER��%c�ɓ����Ă��܂�����%*c%c�ň�ǂݔ�΂�

	switch (en)
	{
	case '+':
		printf("%d + %d = %d", su1, su2, su1 + su2);
		break;
	case '-':
		printf("%d - %d = %d", su1, su2, su1 - su2);
		break;
	case '*':
		printf("%d * %d = %d", su1, su2, su1 * su2);
		break;
	case '/':
		printf("%d / %d = %d", su1, su2, su1 / su2);
		break;
	case '%':
		printf("%d % %d = %d", su1, su2, su1 % su2);
		break;
	default:
		break;
	}
}