#include <stdio.h>
main()
{
	int a = 100;
	int* p_a;      

	p_a = &a;
	printf("a = %d &a = %d\n", a, &a);//&a�͕ϐ�a�̃A�h���X���o��
	printf("p_a = %d *p_a = %d &p_a = %d\n", p_a, *p_a, &p_a);
	/*   p_a��p_a�̒��g���o��
	*    *p_a��p_a�ɓ����Ă���A�h���X�̕ϐ�(a)�̒��g���o��
	*    &p_a��p_a�̃A�h���X���o��
	*/
}