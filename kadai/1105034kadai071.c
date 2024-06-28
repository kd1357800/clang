#include <stdio.h>
main()
{
	int su1, su2;
	char en;

	printf("整数1？");
	scanf("%d", &su1);
	printf("整数2？");
	scanf("%d", &su2);
	printf("演算子？");
	scanf("%*c%c", &en);//ENTERが%cに入ってしまうため%*c%cで一個読み飛ばす

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