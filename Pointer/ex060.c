#include <stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	p_data = data;
	char ch;
	int result[10], i, j = 0;

	printf("検索文字は？");
	scanf("%c", &ch);
	for (i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ch == *(p_data + i))
		{
			result[j] = i + 1;
			j++;
		}
	}
	if (j > 0)
	{
		printf("検索結果は、");
		for (i = 0; i < j; i++)
		{
			printf("%d ", result[i]);
		}
		printf("文字目です");
	}
	else
	{
		printf("検索に引っ掛かりませんでした");
	}
}