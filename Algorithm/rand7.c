#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int su, p, i;

	srand(time(0));
	rand();
	su = rand() % 1000 + 1;

	printf("１〜1000の中で当たりの数を予想してください\n");
	for (i = 0,p = 0; p != su; i++)
	{
		printf("当たりの数は？->");
		scanf("%d", &p);
		if (p > su)
		{
			printf("当たりの数より大きいです\n");
		}
		else
		{
			printf("当たりの数より小さいです\n");
		}
	}
	printf("正解！%d回で当たりました\n", i);
}