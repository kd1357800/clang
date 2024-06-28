#include <stdio.h>
struct data
{
	char course[20];
	char subject[20];
	int unit;
};
main()
{
	struct data school;
	struct data* p;
	p = &school;

	printf("コース名?");
	gets(p->course);
	printf("教科名?");
	gets(p->subject);
	printf("単位数?");
	scanf("%d", &p->unit);

	printf("\nコース名：%s\n", p->course);
	printf("教科名：%s\n", p->subject);
	printf("単位数：%d\n", p->unit);
}