#include <stdio.h>
#include <string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile my;
	printf("名前を入力：");
	gets(my.name);
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d%*c", &my.birth[0], & my.birth[1], &my.birth[2]);
	printf("血液型を入力：");
	gets(my.blood);
	printf("%sーー%d年%d月%d日生 血液型ー%s型",
		my.name,my.birth[0], my.birth[1], my.birth[2], my.blood);
}