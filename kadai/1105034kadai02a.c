#include <stdio.h>
main()
{
	double su1, su2;

	printf("��̎����l�H");
	scanf("%lf%lf", &su1, &su2);
	printf("������%.1lf��%.1lf�̎l�����Z������\n", su1, su2);
	printf("�a = %lf �� = %lf �� = %lf �� = %lf\n", su1 + su2, su1 - su2, su1 * su2, su1 / su2);
}