#include <stdio.h>
enum BitState
{
	Base = 0,			//00000000�@�ʏ���
	Poison = 1 << 0,	//00000001�@�ŏ��
	Sleep = 1 << 1,		//00000010�@������
	Paralysis = 1 << 2,	//00000100�@�}�q���
	Burn = 1 << 3,		//00001000�@�₯�Ǐ��
	AtkUp = 1 << 4,		//00010000�@�U���̓A�b�v
	AtkDown = 1 << 5	//00100000�@�U���̓_�E��
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlg(UINT* s);

main()
{
	//��Ԃ��Ǘ�����MyState��錾����Base(0)�ŏ�����
	UINT MyState = Base;
	ChangeFlag(&MyState);
	ClearFlg(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("\n*****���݂̏��*****\n");
	if (s & Poison)//Poison�̃r�b�g�������Ă���(0����Ȃ��ꍇ)���s
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("�}�q\n");
	}
	if (s & Burn)
	{
		printf("�₯��\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s)
{
	
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃɂ��܂���?\n");
		printf("1:�� 2:���� 3:�}�q 4:�₯�� 5:�U���̓A�b�v 6:�U���̓_�E�� 0:���͏I��>");
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
		printf("�ǂ̏�Ԃ��񕜂��܂���?\n");
		printf("1:�� 2:���� 3:�}�q 4:�₯�� 5:�U���̓A�b�v 6:�U���̓_�E�� 7:�S��ԃN���A 0:���͏I��>");
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