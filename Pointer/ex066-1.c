#include <stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstation4" };
	char** p;
	int i;
	for (i = 0; i < 3; i++)
	{
		p = &p_game[i];
		while (**p)
		{
			printf("%c", **p);//��ڂ�*��&p_game[0]�ɃA�N�Z�X���ē�ڂŕ����ɃA�N�Z�X
			(*p)++;//(*p)��&p_game[1]�̒��g(�ꕶ����)�̃A�h���X�ɃA�N�Z�X����
			       //���̃A�h���X��++���邱�Ƃňꕶ���ڐi�߂�
		}
		putchar('\n');
	}
}