#include <stdio.h>//暗号化　復号化
main()
{
	char s[20];
	int i;

	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}

	printf("%s", &s[0]);
}