#include <stdio.h>
main()
{
	int su,by;
	printf("数を入れて:");
	scanf("%d", &su);
	for (by = 1; by <= 5; by++)//0を初期値にしたい場合はprintfの時にbyに＋1する
	{
		printf("%d ", su * by);
	}
}