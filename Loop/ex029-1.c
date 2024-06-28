#include <stdio.h>
main()
{
	int su;
	printf("”‚ð“ü‚ê‚Ä");
	scanf("%d", &su);
	while (su > 0)// su != 0‚Í‚È‚é‚×‚­Žg‚í‚È‚¢
	{
		printf("*");
		su -= 1;		//su--;‚Å‚à‰Â
	}
}