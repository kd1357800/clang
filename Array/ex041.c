#include <stdio.h>
main()
{
	float box[3],t = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("��������́F");
		scanf("%f", &box[i]);
		t += box[i];
	}
	printf("���v��%.2f�ł�\n", t);
	printf("���v��%.2f�ł�\n", t / 3.0);
}