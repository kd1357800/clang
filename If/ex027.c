#include <stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		//�啶�����������ɂ��鏈��
		printf("�ϊ������:%c\n", moji + 32);
	}
	else if (moji >= 'a' && moji <= 'z')
	{
		//��������啶���ɂ��鏈��
		printf("�ϊ������:%c\n", moji - 32);
	}
	else
	{
		//�A���t�@�x�b�g����Ȃ��Ƃ��̏���
		printf("�A���t�@�x�b�g�ł͂���܂���");
	}
}