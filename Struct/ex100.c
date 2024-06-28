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
	struct ken ken_data[30] = { {1,"北海道",NULL},
							 {2,"青森県",NULL},
							 {3,"岩手県",NULL},
							 {4,"宮城県",NULL},
							 {5,"秋田県",NULL},
							 {6,"山形県",NULL},
							 {7,"福島県",NULL},
							 {DATA_END,"",NULL} };
	struct ken* p, * wp;
	int su;
	//リンクの設定
	p = wp = ken_data;//pとwpの両方にken_data配列の先頭アドレスを代入
	//nextに次の配列のアドレスを代入
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	while (su != 9)
	{
		printf("1:表示\n2:追加\n3:削除\n9:終了");
		scanf("%d", &su);
		switch (su)
		{
		case 1://リンクの表示
			for (p = ken_data; p->code != DATA_END; p = p->next)//pにnextを入れることで一つ進める
			{
				printf("code = %d  name = %s\n", p->code, p->name);
			break;
		case 2:

			break;
		case 3:
			break;
		default:
			printf("エラー");
			break;
		}
	}
}