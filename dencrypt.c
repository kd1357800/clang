#include <stdio.h>//�Í����@������
main()
{
	char s[20];
	int i;

	printf("�Í������������͂��Ă���������");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}

	printf("%s", &s[0]);
}