#include <stdio.h>
main()
{
	int su, t;
	for (su = 1, t = 0; su <= 10;su++ )//�����̏����l�����������ꍇ�J���}�ŋ�؂�
	{
		t += su;
		printf("1����%d�܂ł̘a = %d\n", su,t);
	}
}