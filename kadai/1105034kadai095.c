#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i, t;

	for (i = 0, t = 0; i <= 9; i++)
	{
		t += a[i];
	}
	printf("�z�� a = ");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n���v��%d\t���ρ�%d", t, t / 10);


	for (i = 0, t = 0; i <= 9; i++)
	{
		t += b[i];
	}
	printf("\n�z�� b = ");
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n���v��%d\t���ρ�%d", t, t / 10);
}