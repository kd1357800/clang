#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARD_SIZE 8
main()
{
	int
		card[8] = { 1,1,2,2,3,3,4,4 },
		sel1, sel2,
		target, i, w, t = 0;
	srand(time(0));
	rand();
	//�J�[�h�̃V���b�t������
	for (i = 0; i < CARD_SIZE; i++)
	{
		target = rand() % 8;
		w = card[i];
		card[i] = card[target];
		card[target] = w;
	}
	//�J�[�h�I���̌J��Ԃ�����
	for (i = 0; 1; i++)
	{
		printf("�J�[�h��2���I��œ��͂��Ă�������\n");
		
		scanf("%d%d", &sel1, &sel2);
		if (sel1 > 0 && sel1 <= CARD_SIZE && sel2 > 0 && sel2 <= CARD_SIZE)//1�`4�̎�
		{
			if (card[sel1-1] == 0)
			{
				printf("�I�񂾃J�[�h�̒��ɓ��Ă��J�[�h���܂܂�Ă��܂�");
				continue;
			}

		}
		else
		{
			printf("[�G���[]\n1�`8����͂��Ă�������\n\n");
			gets(sel1);
			gets(sel2);
			i = 0;
			continue;
		}
	}
}