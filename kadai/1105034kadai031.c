#include<stdio.h>
main()
{
	double su1, su2;
	printf("�Q�̎����l�H");
	scanf("%lf%lf", &su1, &su2);
	if (su1 > su2)
	{
		printf("�傫���ق��� = %lf", su1);
	}
	else
	{
		printf("�傫���ق��� = %lf", su2);
	}
}