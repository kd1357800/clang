#include <stdio.h>
main()
{
	int su, t = 0;
	while (1)
	{
		printf("��������:");
		scanf("%d", &su);
		if (su == -999) 
		{
			break;
		}
		t += su;
	}
	printf("���v��%d\n", t);
}