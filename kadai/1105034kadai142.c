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

	printf("�R�[�X��?");
	gets(p->course);
	printf("���Ȗ�?");
	gets(p->subject);
	printf("�P�ʐ�?");
	scanf("%d", &p->unit);

	printf("\n�R�[�X���F%s\n", p->course);
	printf("���Ȗ��F%s\n", p->subject);
	printf("�P�ʐ��F%d\n", p->unit);
}