#include <stdio.h>
struct data
{
	char course[20];
	char subject[20];
	int unit;
};
main()
{
	struct data school = {"ゲームソフトIコース","C言語",8};
	printf("コース名：%s\n", school.course);
	printf("教科名：%s\n", school.subject);
	printf("単位数：%d\n", school.unit);
}