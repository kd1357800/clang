#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int su, p, i;

	srand(time(0));
	rand();
	su = rand() % 1000 + 1;

	printf("�P�`1000�̒��œ�����̐���\�z���Ă�������\n");
	for (i = 0,p = 0; p != su; i++)
	{
		printf("������̐��́H->");
		scanf("%d", &p);
		if (p > su)
		{
			printf("������̐����傫���ł�\n");
		}
		else
		{
			printf("������̐���菬�����ł�\n");
		}
	}
	printf("�����I%d��œ�����܂���\n", i);
}