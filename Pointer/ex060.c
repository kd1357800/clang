#include <stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data;
	p_data = data;
	char ch;
	int result[10], i, j = 0;

	printf("���������́H");
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
		printf("�������ʂ́A");
		for (i = 0; i < j; i++)
		{
			printf("%d ", result[i]);
		}
		printf("�����ڂł�");
	}
	else
	{
		printf("�����Ɉ����|����܂���ł���");
	}
}