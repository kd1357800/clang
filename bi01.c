#include <stdio.h>
enum BitState
{
	Base = 0,			//00000000　通常状態
	Poison = 1 << 0,	//00000001　毒状態
	Sleep = 1 << 1,		//00000010　眠り状態
	Paralysis = 1 << 2,	//00000100　マヒ状態
	Burn = 1 << 3,		//00001000　やけど状態
	AtkUp = 1 << 4,		//00010000　攻撃力アップ
	AtkDown = 1 << 5	//00100000　攻撃力ダウン
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlg(UINT* s);

main()
{
	//状態を管理するMyStateを宣言してBase(0)で初期化
	UINT MyState = Base;
	ChangeFlag(&MyState);
	ClearFlg(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("\n*****現在の状態*****\n");
	if (s & Poison)//Poisonのビットが立ってた時(0じゃない場合)実行
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("マヒ\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s)
{
	
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態にしますか?\n");
		printf("1:毒 2:眠り 3:マヒ 4:やけど 5:攻撃力アップ 6:攻撃力ダウン 0:入力終了>");
		scanf("%*c%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlg(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を回復しますか?\n");
		printf("1:毒 2:眠り 3:マヒ 4:やけど 5:攻撃力アップ 6:攻撃力ダウン 7:全状態クリア 0:入力終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= Base;
			break;
		default:
			break;
		}
	}
}
