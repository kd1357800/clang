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
	struct ken ken_data[] = { {1,"–kŠC“¹",NULL},
							 {2,"ÂXŒ§",NULL},
							 {3,"ŠâŽèŒ§",NULL},
							 {4,"‹{éŒ§",NULL},
							 {5,"H“cŒ§",NULL},
							 {6,"ŽRŒ`Œ§",NULL},
							 {7,"•Ÿ“‡Œ§",NULL},
							 {DATA_END,"",NULL} };
	struct ken hyougo = { 28,"•ºŒÉŒ§",NULL };
	struct ken oosaka = {27,"‘åã•{",NULL};
	struct ken* p, * wp;
	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = ken_data;//p‚Æwp‚Ì—¼•û‚Éken_data”z—ñ‚Ìæ“ªƒAƒhƒŒƒX‚ð‘ã“ü
	//next‚ÉŽŸ‚Ì”z—ñ‚ÌƒAƒhƒŒƒX‚ð‘ã“ü
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next)//p‚Énext‚ð“ü‚ê‚é‚±‚Æ‚Åˆê‚Âi‚ß‚é
	{
		printf("code = %2d  name = %s\n", p->code, p->name);
	}
	//–kŠC“¹‚ÆÂXŒ§‚ÌŠÔ‚É•ºŒÉŒ§‚ð‘}“ü‚·‚é
	ken_data[0].next = &hyougo;
	hyougo.next = &ken_data[1];
	putchar('\n');
	//•Ÿ“‡Œ§‚ÌŒã‚ë‚É‘åã•{
	ken_data[6].next = &oosaka;
	oosaka.next = &ken_data[7];
	for (p = ken_data; p->code != DATA_END; p = p->next)//p‚Énext‚ð“ü‚ê‚é‚±‚Æ‚Åˆê‚Âi‚ß‚é
	{
		printf("code = %2d  name = %s\n", p->code, p->name);
	}
}