#include <stdio.h>
struct data
{
	char course[20];
	char subject[20];
	int unit;
};
main()
{
	struct data school = {"�Q�[���\�t�gI�R�[�X","C����",8};
	printf("�R�[�X���F%s\n", school.course);
	printf("���Ȗ��F%s\n", school.subject);
	printf("�P�ʐ��F%d\n", school.unit);
}