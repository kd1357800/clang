#include <stdio.h>
main()
{
	int d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, s;

	printf("探索値を入力>");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (d[i] == s)break;
	}
	if (i >= 10)
	{
		printf("見つからなかった");
	}
	else
	{
		printf("%d番目に見つかった", i + 1);
	}
}