#include <stdio.h>
#include <stdlib.h>//rand,srand���g����悤�ɂȂ�@�������g���Ƃ��ɕK�v
#include <time.h>  //time(0)���g����悤�ɂȂ�  �������g���Ƃ��ɕK�v
main()
{
	int kazu;

	srand(time(0));//����������������
	rand();
	kazu = rand();//0�`32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}