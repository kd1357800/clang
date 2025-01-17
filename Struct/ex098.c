#include <stdio.h>
#define DATA_END -1
struct ken
{
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1,"北海道",NULL},
							 {2,"青森県",NULL},
							 {3,"岩手県",NULL},
							 {4,"宮城県",NULL},
							 {5,"秋田県",NULL},
							 {6,"山形県",NULL},
							 {7,"福島県",NULL},
							 {DATA_END,"",NULL} };
	struct ken hyougo = { 28,"兵庫県",NULL };
	struct ken oosaka = {27,"大阪府",NULL};
	struct ken* p, * wp;
	//リンクの設定
	p = wp = ken_data;//pとwpの両方にken_data配列の先頭アドレスを代入
	//nextに次の配列のアドレスを代入
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//リンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next)//pにnextを入れることで一つ進める
	{
		printf("code = %2d  name = %s\n", p->code, p->name);
	}
	//北海道と青森県の間に兵庫県を挿入する
	ken_data[0].next = &hyougo;
	hyougo.next = &ken_data[1];
	putchar('\n');
	//福島県の後ろに大阪府
	ken_data[6].next = &oosaka;
	oosaka.next = &ken_data[7];
	for (p = ken_data; p->code != DATA_END; p = p->next)//pにnextを入れることで一つ進める
	{
		printf("code = %2d  name = %s\n", p->code, p->name);
	}
}