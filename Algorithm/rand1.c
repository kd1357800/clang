#include <stdio.h>
#include <stdlib.h>//rand,srandが使えるようになる　乱数を使うときに必要
#include <time.h>  //time(0)が使えるようになる  乱数を使うときに必要
main()
{
	int kazu;

	srand(time(0));//乱数を初期化する
	rand();
	kazu = rand();//0～32767の範囲で乱数を求める
	printf("発生した乱数は%dです\n", kazu);
}