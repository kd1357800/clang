#include <stdio.h>
void display1(int n1);//�v���g�^�C�v�錾�l�n��
void display2(int* n2);//�v���g�^�C�v�錾�A�h���X�n��
main()
{
	int a, b;
	printf("���la ?:");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);

	printf("���lb ?:");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d\n\n", b);
}

void display1(int n)//�߂�l�̌^��void�Ȃ̂�+=10�͂���Ȃ�
{
	printf("���la��%d�ł��B\n", n);
	n += 10;
	return;
}

void display2(int *n)//�������A�h���X�Ń|�C���^���g���Ă�̂�+=�����邱�Ƃ��ł���
{
	printf("���lb��%d�ł��B\n", *n);
	*n += 10;
	return;
}