#include <stdio.h>
main()
{
	int su, jud;

	printf("0から100までの整数？");
	scanf("%d", &su);

	if (su >= 90)
	{
		jud = 5;
	}
	else if (su >= 80 && su < 90)
	{
		jud = 4;
	}
	else if (su >= 50 && su < 80)
	{
		jud = 3;
	}
	else if (su >= 30 && su < 50)
	{
		jud = 2;
	}
	else
	{
		jud = 1;
	}

	printf("その数値の判定結果は「%d」です", jud);
}