#include <stdio.h>
#include <string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" }, *w;
	int i, j;

	for (i = 0; i < CNT - 1; i++)//3����s
	{
		for (j = i + 1; j < CNT; j++)//4����s
		{
			if (1 == strcmp(p_tbl[i],p_tbl[j]))//p_tbl[i] > p_tbl[j]���ǂ������m���߂�
			{
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}
	for (i = 0; i < CNT; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}