#include <stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;

	printf("�����l�P�H");
	scanf("%lf", &a);
	printf("�����l�Q�H");
	scanf("%lf", &b);

	if (*p_a > *p_b)
	{
		printf("�傫���ق���%lf", *p_a);
	}
	else if (*p_a < *p_b)
	{
		printf("�傫���ق���%lf", *p_b);
	}
}