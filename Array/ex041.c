#include <stdio.h>
main()
{
	float box[3],t = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("実数を入力：");
		scanf("%f", &box[i]);
		t += box[i];
	}
	printf("合計は%.2fです\n", t);
	printf("合計は%.2fです\n", t / 3.0);
}