#include <stdio.h>
main()
{
	float su1, su2, su3;
	printf("�P�ڂ̐��� : ");
	scanf("%f", &su1);
	printf("2�ڂ̐��� : ");
	scanf("%f", &su2);
	printf("3�ڂ̐��� : ");
	scanf("%f", &su3);
	printf("���v= %.2f ����= %.2f", su1 + su2 + su3, (su1 + su2 + su3) / 3);
}