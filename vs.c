#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int hp = 100, damage, a;

	srand(time(0));
	rand();
	
	while (1)
	{
		printf("�U��");
		scanf("%d", & a);
		damage = rand() % 10 + 1;
		if (damage == 11)
		{
			printf("�U�����O����");
			printf("�G�̎c��̗�%d", hp);
		}
		else
		{
			printf("%d�̃_���[�W",damage);
			printf("�G�̎c��̗�%d", hp);
		}
	}
}