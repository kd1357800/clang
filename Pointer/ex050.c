#include <stdio.h>
main()
{
	int a = 100;
	int* p_a;      

	p_a = &a;
	printf("a = %d &a = %d\n", a, &a);//&aは変数aのアドレスを出力
	printf("p_a = %d *p_a = %d &p_a = %d\n", p_a, *p_a, &p_a);
	/*   p_aはp_aの中身を出力
	*    *p_aはp_aに入っているアドレスの変数(a)の中身を出力
	*    &p_aはp_aのアドレスを出力
	*/
}