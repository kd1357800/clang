#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ITEMS 17

//2進数
int bin[NUM_ITEMS] = {0000,0001,0010,0011,0100,0101,0110,0111,1000,1001,1010,1011,1100,1101,1110,1111,10000};
//16進数
int hex[NUM_ITEMS] = { 0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xA,0xB,0xC,0xD,0xE,0xF,0x10 };
//コピー用
char copy[NUM_ITEMS][10];
//関数プロトタイプ宣言
int shuffle(int* p);//シャッフルのオンオフ
void quiz_b(void);//2進数が解答の問題の表示
void quiz_h(void);//16進数が解答の問題表示

main()
{
	int key = 0, result;

	while (key != 'e')
	{
		printf("\nb入力：16進数を2進数に変換\nh入力：16進数を2進数に変換\te入力で終了\n");
		key = getche();
		
		if (key == 'b')
		{
			while (shuffle());//yesかnoが入力されるまで無限ループ
			quiz_b();
		}
		if (key == 'h')
		{
			while (shuffle());//yesかnoが入力されるまで無限ループ
			quiz_h();
		}
	}
}

int shuffle(int *p)//シャッフルのオンオフ
{
	char flag[5];

	printf("\n\nシャッフルはオンにする？yes OR no\n");
	gets(flag);
	if (0 == strcmp(flag, "yes"))//yesの場合シャッフル
	{
		printf("シャッフル");
		return 0;
	}
	else if (0 == strcmp(flag, "no"))//noの場合0を返す
	{
		return 0;
	}
	return 1;//どちらでもない場合1を返して無限ループ
}

void quiz_b(void)//2進数が解答の問題の表示
{
	printf("2進数解答\n\n");
}

void quiz_h(void)//16進数が解答の問題表示
{
	printf("16進数解答\n\n");
}