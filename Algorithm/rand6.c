#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int p, cpu;

	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)＞");
	scanf("%d", &p);
	
	srand(time(0));
	rand();
	cpu = rand() % 3;

	switch (p)
	{
	case 1:
		printf("\nプレイヤーは、グーです。\n");
		break;
	case 2:
		printf("\nプレイヤーは、チョキです。\n");
		break;
	case 3:
		printf("\nプレイヤーは、パーです。\n");
		break;
	}

	switch (cpu)
	{
	case 0:
		printf("コンピュータは、グーです。\n\n");
		break;
	case 1:
		printf("コンピュータは、チョキです。\n\n");
		break;
	case 2:
		printf("コンピュータは、パーです。\n\n");
		break;
	}

	switch (((p - 1) - cpu + 3) % 3)
	{
	case 0:
		printf("あいこです。");
		break;
	case 1:
		printf("コンピュータの勝ちです。");
		break;
	case 2:
		printf("プレイヤーの勝ちです。");
		break;
	}
}