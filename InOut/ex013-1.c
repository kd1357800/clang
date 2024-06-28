#include <stdio.h>
main()
{
	char su1, su2;
	su1 = '5';
	su2 = '6';
	printf("%c × %c = %d \n", su1,su2,(su1 - '0') * (su2 - '0'));
	//文字データの数字は文字コード'0'を引くと数値に変換できる
}