#include <stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;			//�ϐ��̏�����
	printf("��������");
	scanf("%d", &ia);
	while (ia != -999)  //
	{
		gokei += ia;		//gokei = gokei + ia;�̗�	
		printf("��������");
		scanf("%d", &ia);
	}
	printf("���v��%d\n", gokei);
}