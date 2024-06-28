#include <stdio.h>
main()
{
	float box[3],t = 0;
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
		t += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", t);
	printf("‡Œv‚Í%.2f‚Å‚·\n", t / 3.0);
}