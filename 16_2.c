#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ITEMS 17

//2�i��
int bin[NUM_ITEMS] = {0000,0001,0010,0011,0100,0101,0110,0111,1000,1001,1010,1011,1100,1101,1110,1111,10000};
//16�i��
int hex[NUM_ITEMS] = { 0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xA,0xB,0xC,0xD,0xE,0xF,0x10 };
//�R�s�[�p
char copy[NUM_ITEMS][10];
//�֐��v���g�^�C�v�錾
int shuffle(int* p);//�V���b�t���̃I���I�t
void quiz_b(void);//2�i�����𓚂̖��̕\��
void quiz_h(void);//16�i�����𓚂̖��\��

main()
{
	int key = 0, result;

	while (key != 'e')
	{
		printf("\nb���́F16�i����2�i���ɕϊ�\nh���́F16�i����2�i���ɕϊ�\te���͂ŏI��\n");
		key = getche();
		
		if (key == 'b')
		{
			while (shuffle());//yes��no�����͂����܂Ŗ������[�v
			quiz_b();
		}
		if (key == 'h')
		{
			while (shuffle());//yes��no�����͂����܂Ŗ������[�v
			quiz_h();
		}
	}
}

int shuffle(int *p)//�V���b�t���̃I���I�t
{
	char flag[5];

	printf("\n\n�V���b�t���̓I���ɂ���Hyes OR no\n");
	gets(flag);
	if (0 == strcmp(flag, "yes"))//yes�̏ꍇ�V���b�t��
	{
		printf("�V���b�t��");
		return 0;
	}
	else if (0 == strcmp(flag, "no"))//no�̏ꍇ0��Ԃ�
	{
		return 0;
	}
	return 1;//�ǂ���ł��Ȃ��ꍇ1��Ԃ��Ė������[�v
}

void quiz_b(void)//2�i�����𓚂̖��̕\��
{
	printf("2�i����\n\n");
}

void quiz_h(void)//16�i�����𓚂̖��\��
{
	printf("16�i����\n\n");
}