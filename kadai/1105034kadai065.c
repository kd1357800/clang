#include <stdio.h>
main()
{
	int su = 0, t = 0, i = -1;
	do
	{
		t += su;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &su);
		i++;
	} while (su != -999);
	printf("���v = %d\n���� = %f", t, (float)t / i);
}