#include <stdio.h>
main()
{
	int ret;//�߂�l
	int data, sum = 0,cnt = 0;

	printf("�����F");

	ret = scanf("%d", &data);
	while (ret != EOF)
	{
		sum += data;
		cnt++;
		printf("�����F");
		ret = scanf("%d", &data);
	}
	printf("���v=%d\t����=%.2f\n", sum, (float)sum / cnt);
}