#include <stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 }, i, g;
	double* p_data;
	p_data = data;

	printf("data[] = ");
	for (i = 0, g = 0; i < 5; i++)
	{
		printf("%lf, ", *p_data);
		g += *p_data++;
	}
	printf("\n‡Œv = %.3lf\n•½‹Ï = %.3lf\n", g, g / 5);
}