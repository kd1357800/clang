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
	printf("���O����́F");
	gets(my.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d%*c", &my.birth[0], & my.birth[1], &my.birth[2]);
	printf("���t�^����́F");
	gets(my.blood);
	printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^",
		my.name,my.birth[0], my.birth[1], my.birth[2], my.blood);
}