#include <stdio.h>
main()
{
	int low, mid, high, s, d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	low = 0;
	high = 10;

	printf("探索値を入力＞");
	scanf("%d", &s);

	while (low <= high)//見つかるまで最後までの条件式
	{
		mid = (low + high) / 2;

		if (s == d[mid])break;//探索値が見つかったら

		if (s > d[mid]){low = mid + 1;}//midより探索値が大きかったら

		if (s < d[mid]){high = mid - 1;}//midより探索値が小さかったら
	}
	
	if (low > high)//最後まで探したか否か
	{
		printf("見つからなかった");
	}
	else
	{
		printf("%d番目に見つかった",mid + 1);
	}
}