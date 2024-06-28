#include <stdio.h>
main()
{
	int d[11] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, s;

	printf("’Tõ’l‚ð“ü—Í>");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; d[i] != s; i++)
	{

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