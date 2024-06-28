#include <stdio.h>
main()
{
	char moji[10];
	int i;

	printf("‰ñ”‚Æ•¶Žš—ñ‚ð“ü—Í\t");
	scanf("%d%s", &i, &moji);

	while (i > 0)
	{
		printf("%s\t", &moji[0]);
		i--;
	}
}