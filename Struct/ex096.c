#include <stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};
void display1(int* p_a);
void display2(struct syohin_data* p_syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�P�V�S��",50 };
	display1(&a);
	display2(&syohin);
	display2(&syohin);
}

void display1(int* p_a)
{
	printf("a = %d\n", *p_a);
}

void display2(struct syohin_data* p_syohin)
{
	printf("syohin->name = %s  syohin->tanka = %d\n", p_syohin->name, p_syohin->tanka);
	strcpy(p_syohin->name, "�l�グ�P�V�S��");//������̏���������strcpy���g��
	p_syohin->tanka = 100;//���l�͏��������\
}