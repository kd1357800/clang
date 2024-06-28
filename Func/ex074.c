#include <stdio.h>
void display1(int n1);//プロトタイプ宣言値渡し
void display2(int* n2);//プロトタイプ宣言アドレス渡し
main()
{
	int a, b;
	printf("数値a ?:");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);

	printf("数値b ?:");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d\n\n", b);
}

void display1(int n)//戻り値の型がvoidなので+=10はされない
{
	printf("数値aは%dです。\n", n);
	n += 10;
	return;
}

void display2(int *n)//引数がアドレスでポインタを使ってるので+=をすることができる
{
	printf("数値bは%dです。\n", *n);
	*n += 10;
	return;
}