#include <stdio.h>
main()
{
	int c;//–ß‚è’l
	char dumy[256];
	char* p;

	p = gets(dumy);//“ü—Í
	while (p != NULL)
	{
		printf("%s\n", dumy);
		p = gets(dumy);
	}
}