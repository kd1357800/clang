#include <stdio.h>
#define DATA_END -1
struct ken
{
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1,"�k�C��",NULL},
							 {2,"�X��",NULL},
							 {3,"��茧",NULL},
							 {4,"�{�錧",NULL},
							 {5,"�H�c��",NULL},
							 {6,"�R�`��",NULL},
							 {7,"������",NULL},
							 {DATA_END,"",NULL} };
	struct ken hyougo = { 28,"���Ɍ�",NULL };
	struct ken oosaka = {27,"���{",NULL};
	struct ken* p, * wp;
	//�����N�̐ݒ�
	p = wp = ken_data;//p��wp�̗�����ken_data�z��̐擪�A�h���X����
	//next�Ɏ��̔z��̃A�h���X����
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)//p��next�����邱�Ƃň�i�߂�
	{
		printf("code = %2d  name = %s\n", p->code, p->name);
	}
	//�k�C���ƐX���̊Ԃɕ��Ɍ���}������
	ken_data[0].next = &hyougo;
	hyougo.next = &ken_data[1];
	putchar('\n');
	//�������̌��ɑ��{
	ken_data[6].next = &oosaka;
	oosaka.next = &ken_data[7];
	for (p = ken_data; p->code != DATA_END; p = p->next)//p��next�����邱�Ƃň�i�߂�
	{
		printf("code = %2d  name = %s\n", p->code, p->name);
	}
}