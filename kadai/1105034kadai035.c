#include <stdio.h>
main()
{
	int su;
	printf("�����H");
	scanf("%d", &su);
	if (su > 0)
	{
		printf("���͒l�́u�v���X�v�ł�");
	}
	else if (su < 0)
	{
		printf("���͒l�́u�}�C�i�X�v�ł�");
	}
	else if (su == 0)
	{
		printf("���͒l�́u0�v�ł�");
	}
}