#include <stdio.h>
main()
{
	char moji;
	int su1, su2, su3;

	printf("��������́F");
	scanf("%c", &moji);
	printf("��������́F");
	scanf("%d%d%d", &su1, &su2, &su3);

	switch (moji)
	{
	case 'd':
	case 'D':
		if (su1 > su2)
		{
			if (su1 > su3)
			{
				printf("�ő�l��%d�ł�",su1 );
			}
			else
			{
				printf("�ő�l��%d�ł�", su3);
			}
		}
		else
		{
			if (su2 > su3)
			{
				printf("�ő�l��%d�ł�",su2 );
			}
			else
			{
				printf("�ő�l��%d�ł�", su3);
			}
		}
		break;
	case 's':
	case 'S':
		if (su1 < su2)
		{
			if (su1 < su3)
			{
				printf("�ŏ��l��%d�ł�", su1);
			}
			else
			{
				printf("�ŏ��l��%d�ł�", su3);
			}
		}
		else
		{
			if (su2 < su3)
			{
				printf("�ŏ��l��%d�ł�", su2);
			}
			else
			{
				printf("�ŏ��l��%d�ł�", su3);
			}
		}
		break;
	case 'g':
	case 'G':
		printf("���v��%d�ł�",su1 + su2 + su3);
		break;
	case 'h':
	case 'H':
		printf("���ς�%.2f�ł�", (su1 + su2 + su3) / 3.0);
		break;
	default:
		printf("�G���[");
		break;
	}
}