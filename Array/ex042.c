#include <stdio.h>
main()
{
	char data[] = "Apple";//�����l������ꍇ[]�͎w��Ȃ��ł������l�Ɠ������ɂȂ�
	int i;

	printf("1�������\��\n");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}

	printf("\n������ŕ\��\n");
	//printf("%s", &data[0]);//%s�̂Ƃ��̓A�h���X���w��A&data[�w��]
	printf("%s", data);		//�z�񖼂��������Ɛ擪�A�h���X��\���Adata + �w��
							//�w�肳�ꂽ�A�h���X����\0�܂ŕ\��         
}