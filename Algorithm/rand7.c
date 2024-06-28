#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int su, p, i;

	srand(time(0));
	rand();
	su = rand() % 1000 + 1;

	printf("‚P`1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	for (i = 0,p = 0; p != su; i++)
	{
		printf("“–‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &p);
		if (p > su)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		else
		{
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
	}
	printf("³‰ğI%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½\n", i);
}