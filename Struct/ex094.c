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
		printf("\n%d人目\n", i + 1);
		printf("名前を入力：");
		gets(p->name);
		printf("生年月日を空白で区切って入力：");
		scanf("%d%d%d%*c", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力：");
		gets(p->blood);
	}
	putchar('\n');
	p = &data[0];
	for ( i = 0; i < DATA_SU; i++,p++)
	{
		if (0 == (strcmp(p->blood,"A")))
		{
			printf("%sーー%d年%d月%d日生 血液型ー%s型\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}