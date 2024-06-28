#include <stdio.h>
main()
{
	int en, su1, su2;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &en);
	printf("2‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &su1, &su2);
	if (en == 1)
	{
		printf("%d\n", su1 + su2);
	}
	else if (en == 2)
	{
		printf("%d\n", su1 - su2);
	}
	else if (en == 3)
	{
		printf("%d\n", su1 * su2);
	}
	else if (en == 4)
	{
		printf("%d\n", su1 / su2);
	}
	else
	{
		printf("1`4‚Ì‰‰Zq‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	}
}