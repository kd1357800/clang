#include <stdio.h>
main()
{
	int su = 0, t = 0,i = -1;
	while (su != -999)
	{
		t += su;
		i++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
	}
	printf("���v = %d\n", t);
	printf("���� = %.2f\n",(float)t / i);
}