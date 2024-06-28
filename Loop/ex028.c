#include <stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;			//•Ï”‚Ì‰Šú‰»
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);
	while (ia != -999)  //
	{
		gokei += ia;		//gokei = gokei + ia;‚Ì—ª	
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‡Œv%d\n", gokei);
}