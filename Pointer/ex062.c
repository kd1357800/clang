#include <stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;
	p_data1 = data1;//‰Šú‰»
	p_data2 = data2;//‰Šú‰»

	while (*p_data2++ = *p_data1++);

	p_data1 = data1;//‰Šú‰»
	while (*p_data1++ = *p++);
	
	p_data1 = data1;//‰Šú‰»
	p_data2 = data2;//‰Šú‰»
	printf("\n”z—ñdata1 = ");
	while (*p_data1)
	{
		putchar(*p_data1++);
	}

	printf("\n”z—ñdata2 = ");
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
}