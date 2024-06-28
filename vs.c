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
		printf("攻撃");
		scanf("%d", & a);
		damage = rand() % 10 + 1;
		if (damage == 11)
		{
			printf("攻撃を外した");
			printf("敵の残り体力%d", hp);
		}
		else
		{
			printf("%dのダメージ",damage);
			printf("敵の残り体力%d", hp);
		}
	}
}