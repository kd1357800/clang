#include <stdio.h>
main()
{
	char s[20];
	int key[20],i;

	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)//�������L�[�̓���
	{
		printf("s[%d]�̕������L�[��",i);
		scanf("%d", &key[i]);
		s[i] -= key[i];
	}

	printf("�������ςݕ�����́A%s\n", &s[0]);
	printf("�������L�[�́A");
	for (i = 0; s[i] != '\0'; i++)//�������L�[�̏o��
	{
		printf("%d ", key[i]);
	}
}