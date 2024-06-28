#include <stdio.h>
main()
{
	int a[3], * p;

	printf("a[0] = 10, a[1] = 20, a[2] = 30;\n\n");

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p・・・%d\n", *p);
	printf("*p・・・%d\n\n", *p);

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+1・・・%d\n", *p + 1);
	printf("*p+1・・・%d\n\n", *p + 1);

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*(p+1)・・・%d\n", *(p+1));
	printf("*(p+1)・・・%d\n\n", *(p + 1));

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+=1・・・%d\n", *p += 1);
	printf("*p+=1・・・%d\n\n", *p += 1);

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p++・・・%d\n", *p++);
	printf("*p++・・・%d\n\n", *p++);

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("(*p)++・・・%d\n", (*p)++);
	printf("(*p)++・・・%d\n\n", (*p)++);

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*++p・・・%d\n", *++p);
	printf("*++p・・・%d\n\n", *++p);

	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("++*p・・・%d\n", ++*p);
	printf("++*p・・・%d\n\n", ++ * p);
}