#include <stdio.h>
main()
{
	int su = 0, i = 0, t = 0;
	while (1)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &su);
		if (su == -999) break;
		if (su < 0) continue;
		t += su;
		i++;
	}
	printf("���v = %d\n", t);
	printf("���� = %.3f\n", (float)t / i);
}