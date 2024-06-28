#include <stdio.h>
main()
{
	int su,by;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);
	for (by = 1; by <= 5; by++)//0‚ğ‰Šú’l‚É‚µ‚½‚¢ê‡‚Íprintf‚Ì‚Éby‚É{1‚·‚é
	{
		printf("%d ", su * by);
	}
}