#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[20];
	int key[20],i;
	srand(time(0));
	rand();

	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)//乱数で暗号化
	{
		key[i] = rand() % 6;
		s[i] += key[i];
	}

	printf("暗号化文字列は、%s\n", &s[0]);
	printf("暗号化キーは、");
	for (i = 0; s[i] != '\0'; i++)//暗号化キーの出力
	{
		printf("%d ", key[i]);
	}
}