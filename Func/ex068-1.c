#include <stdio.h>
main()
{
	int c;//�߂�l
	char dumy[256];
	char data1,data2;

	c = scanf("%c%c",&data1,&data2);
	while (c != EOF)
	{
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data1, &data2);
	}
	printf("%d\n", printf("HELLO"));//5�����Ȃ̂�5���\��������
	printf("%d\n", printf("����ɂ���"));//�S�p��2�o�C�g������10���o��
}