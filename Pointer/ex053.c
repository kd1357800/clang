#include <stdio.h>
main()
{
	int a, b, w;
	int* p_a, * p_b;

	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("���s�O�F*p_a = %d\t*p_b = %d\n", *p_a, *p_b);
	w = p_a;
	p_a = p_b;
	p_b = w;
	printf("���s��F*p_a = %d\t*p_b = %d\n", *p_a, *p_b);
}