#include <stdio.h>//ˆÃ†‰»@•œ†‰»
main()
{
	char s[20];
	int i;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}

	printf("%s", &s[0]);
}