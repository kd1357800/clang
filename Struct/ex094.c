#include <stdio.h>
#include <string.h>
#define DATA_SU 5
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[DATA_SU];
	struct profile* p;
	p = &data[0];
	int i;
	for ( i = 0; i < DATA_SU; i++,p++)
	{
		printf("\n%d�l��\n", i + 1);
		printf("���O����́F");
		gets(p->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d%*c", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^����́F");
		gets(p->blood);
	}
	putchar('\n');
	p = &data[0];
	for ( i = 0; i < DATA_SU; i++,p++)
	{
		if (0 == (strcmp(p->blood,"A")))
		{
			printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}