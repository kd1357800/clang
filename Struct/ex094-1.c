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
	struct profile data[5] = { {"�c��",{2000,5,5},"A"},
							   {"���",{2000,8,5},"A"},
							   {"�R�c",{2000,2,5},"A"},
							   {"�c��",{2000,2,9},"A"},
							   {"�c��",{2000,3,5},"A"}, };

	struct profile* p;

	int i;
	p = &data[0];
	for ( i = 0; i < DATA_SU; i++,p++)
	{
		if (p->day.tuki == 2)
		{
			printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n",
				p->name, p->day.nen, p->day.tuki, p->day.hi, p->blood);
		}
	}
}