#include <stdio.h>
main()
{
	int data[10] = { 10, 20, 30, 40, 50, 60, 70, 80, -999 };
	int* p_data;
	p_data = data;

	printf("\n�|�C���^���Œ�ŕ\��\n");
	printf("�z�� data[] = ");
	for (int i = 0; *(p_data + i) != -999; i++)
	{
		printf("%d, ", *(p_data + i));
	}

	printf("\n\n�|�C���^��ω������ĕ\��\n");
	printf("�z�� data[] = ");
	while (*p_data != -999)
	{
		printf("%d, ", *p_data++);
	}
}