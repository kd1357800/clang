#include <stdio.h>
main()
{
	char moji[10];
	int i;

	printf("回数と文字列を入力\t");
	scanf("%d%s", &i, &moji);

	while (i > 0)
	{
		printf("%s\t", &moji[0]);
		i--;
	}
}