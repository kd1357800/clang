#include <stdio.h>
main()
{
	char moji[10];
	int i;

	printf("�񐔂ƕ���������\t");
	scanf("%d%s", &i, &moji);

	while (i > 0)
	{
		printf("%s\t", &moji[0]);
		i--;
	}
}