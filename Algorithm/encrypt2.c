#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[20];
	int key[20],i;
	srand(time(0));
	rand();

	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)//�����ňÍ���
	{
		key[i] = rand() % 6;
		s[i] += key[i];
	}

	printf("�Í���������́A%s\n", &s[0]);
	printf("�Í����L�[�́A");
	for (i = 0; s[i] != '\0'; i++)//�Í����L�[�̏o��
	{
		printf("%d ", key[i]);
	}
}