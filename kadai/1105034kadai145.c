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
		printf("���i���F\t%s\n", syohin[i].name);
		printf("���i�F\t%d�~\t���E�ߓx�F\t", syohin[i].price);
		for ( j = 0; j < 5; j++)
		{
			if (j < syohin[i].point)
			{
				printf("�� ");
			}
			else
			{
				printf("�� ");
			}
		}
		printf("\n���F\t%d��\t���z�F\t\\%d-\n\n",syohin[i].number,syohin[i].total);
	}
	printf("\n\t���v���z��\\%d-", t);
}