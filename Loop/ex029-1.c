#include <stdio.h>
main()
{
	int su;
	printf("��������");
	scanf("%d", &su);
	while (su > 0)// su != 0�͂Ȃ�ׂ��g��Ȃ�
	{
		printf("*");
		su -= 1;		//su--;�ł���
	}
}