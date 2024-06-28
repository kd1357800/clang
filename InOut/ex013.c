#include <stdio.h>
main()
{
	char su;
	su = '1';
	printf("su : %c \n", su);
	printf("数値に変換 : %d \n", su - '0');
	//文字コード値で'1'-'0'＝49－48をしている
	//1＝49、0＝48
}