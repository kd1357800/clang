#include <stdio.h>
main()
{
	char s[20];
	int key[20],i;

	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)//復号化キーの入力
	{
		printf("s[%d]の復号化キー＞",i);
		scanf("%d", &key[i]);
		s[i] -= key[i];
	}

	printf("復号化済み文字列は、%s\n", &s[0]);
	printf("復号化キーは、");
	for (i = 0; s[i] != '\0'; i++)//復号化キーの出力
	{
		printf("%d ", key[i]);
	}
}