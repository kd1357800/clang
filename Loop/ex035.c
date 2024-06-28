#include <stdio.h>
main()
{
	int su, t = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
		if (su == -999) 
		{
			break;
		}
		t += su;
	}
	printf("‡Œv%d\n", t);
}