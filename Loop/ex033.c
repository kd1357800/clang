#include <stdio.h>
main()
{
	int su = 0, t = 0, kai = -1;
	do
	{
		t += su;
		printf("���́H");
		scanf("%d", &su);
		kai++;
	} while (su != -999);
	printf("���v��%d\t���ρ�%.2f\n", t, (float)t / kai);//�v�Z�̐����̑O��(float)�����邱�ƂŌ^�ϊ������Ď������o����
}
