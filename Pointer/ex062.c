#include <stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;
	p_data1 = data1;//初期化
	p_data2 = data2;//初期化

	while (*p_data2++ = *p_data1++);

	p_data1 = data1;//初期化
	while (*p_data1++ = *p++);
	
	p_data1 = data1;//初期化
	p_data2 = data2;//初期化
	printf("\n配列data1 = ");
	while (*p_data1)
	{
		putchar(*p_data1++);
	}

	printf("\n配列data2 = ");
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
}