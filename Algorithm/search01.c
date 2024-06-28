#include <stdio.h>
main()
{
	int d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, s;

	printf("’Tõ’l‚ð“ü—Í>");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (d[i] == s)break;
	}
	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½", i + 1);
	}
}