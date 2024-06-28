#include <stdio.h>
main()
{
	char* p_game[3] = { "wii","ds","playstation4" };
	char** p;
	int i;
	for (i = 0; i < 3; i++)
	{
		p = &p_game[i];
		while (**p)
		{
			printf("%c", **p);//一個目の*で&p_game[0]にアクセスして二個目で文字にアクセス
			(*p)++;//(*p)で&p_game[1]の中身(一文字目)のアドレスにアクセスして
			       //そのアドレスを++することで一文字目進める
		}
		putchar('\n');
	}
}