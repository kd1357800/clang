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
	struct syohin_data syohin = { "ケシゴム",50 };
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
	strcpy(p_syohin->name, "値上げケシゴム");//文字列の書き換えはstrcpyを使う
	p_syohin->tanka = 100;//数値は書き換え可能
}