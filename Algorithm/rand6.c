#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int p, cpu;

	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)��");
	scanf("%d", &p);
	
	srand(time(0));
	rand();
	cpu = rand() % 3;

	switch (p)
	{
	case 1:
		printf("\n�v���C���[�́A�O�[�ł��B\n");
		break;
	case 2:
		printf("\n�v���C���[�́A�`���L�ł��B\n");
		break;
	case 3:
		printf("\n�v���C���[�́A�p�[�ł��B\n");
		break;
	}

	switch (cpu)
	{
	case 0:
		printf("�R���s���[�^�́A�O�[�ł��B\n\n");
		break;
	case 1:
		printf("�R���s���[�^�́A�`���L�ł��B\n\n");
		break;
	case 2:
		printf("�R���s���[�^�́A�p�[�ł��B\n\n");
		break;
	}

	switch (((p - 1) - cpu + 3) % 3)
	{
	case 0:
		printf("�������ł��B");
		break;
	case 1:
		printf("�R���s���[�^�̏����ł��B");
		break;
	case 2:
		printf("�v���C���[�̏����ł��B");
		break;
	}
}