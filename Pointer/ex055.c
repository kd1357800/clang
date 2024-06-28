#include <stdio.h>
#define B_SIZE 4
main()
{
	int a[] = { 11,22,33,44,55,66 }, i, i_t;
	int* p_a;
	float b[B_SIZE] = { 11.1,22.2,33.3,44.4 }, f_t;
	float* p_b;

	;
	for (i = 0, p_a = a, i_t = 0; i < sizeof a / sizeof (int); i++, p_a++)
	{
		i_t += *p_a;
	}
	printf("配列a　合計 = %7d\t平均 = %6.3f\n", i_t, (float)i_t / (sizeof a / sizeof(int)));
	for (i = 0, p_b = b, f_t = 0; i < sizeof b / sizeof(float); i++, p_b++)
	{
		f_t += *p_b;
	}
	printf("配列b　合計 = %7.3f\t平均 = %6.3f\n", f_t, f_t / (sizeof b / sizeof(float)));
}