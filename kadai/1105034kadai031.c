#include<stdio.h>
main()
{
	double su1, su2;
	printf("２つの実数値？");
	scanf("%lf%lf", &su1, &su2);
	if (su1 > su2)
	{
		printf("大きいほうは = %lf", su1);
	}
	else
	{
		printf("大きいほうは = %lf", su2);
	}
}