#include <stdio.h>
main()
{
	int d[11] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, s;

	printf("探索値を入力>");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; d[i] != s; i++)
	{

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