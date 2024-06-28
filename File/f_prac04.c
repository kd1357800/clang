#include <stdio.h>
#define Sol_Num 3//�����̐�
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sol[Sol_Num];
	
	SetInfo(sol, "file04.txt");
	Display(sol);

}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	fp = fopen(filename, "r");
	for (int i = 0; i < Sol_Num; i++)
	{
		fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp, (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
	}
	fclose(fp);
}

void Display(Soldier* s)
{
	for (int i = 0; i < Sol_Num; i++)
	{
		printf("���O�F%s HP:%d\n", (s + i)->name, (s + i)->hp);
		printf("����̖��O:%s �c�e���F%d �U����:%.2f\n\n", (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}