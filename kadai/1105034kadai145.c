#include <stdio.h>
#define SYOHIN 3
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main() 
{
	struct fruit syohin[SYOHIN] = {{"peach",300,5,3,0},
									{"grape",200,4,10,0},
									{"watermelon",1500,5,8,0} };
	int i, j, t = 0;
	for ( i = 0; i < SYOHIN; i++)
	{
		syohin[i].total = syohin[i].price * syohin[i].number;
		t += syohin[i].total;
		printf("¤•i–¼F\t%s\n", syohin[i].name);
		printf("‰¿ŠiF\t%d‰~\t‚¨‘E‚ß“xF\t", syohin[i].price);
		for ( j = 0; j < 5; j++)
		{
			if (j < syohin[i].point)
			{
				printf("š ");
			}
			else
			{
				printf("™ ");
			}
		}
		printf("\nŒÂ”F\t%dŒÂ\t‹àŠzF\t\\%d-\n\n",syohin[i].number,syohin[i].total);
	}
	printf("\n\t‡Œv‹àŠz\\%d-", t);
}