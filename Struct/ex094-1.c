#include <stdio.h>
#include <string.h>
#define DATA_SU 5
struct birth
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct birth day;
	char blood[5];

};

main()
{
	struct profile data[5] = { {"田中",{2000,5,5},"A"},
							   {"鈴木",{2000,8,5},"A"},
							   {"山田",{2000,2,5},"A"},
							   {"田中",{2000,2,9},"A"},
							   {"田中",{2000,3,5},"A"}, };

	struct profile* p;

	int i;
	p = &data[0];
	for ( i = 0; i < DATA_SU; i++,p++)
	{
		if (p->day.tuki == 2)
		{
			printf("%sーー%d年%d月%d日生 血液型ー%s型\n",
				p->name, p->day.nen, p->day.tuki, p->day.hi, p->blood);
		}
	}
}