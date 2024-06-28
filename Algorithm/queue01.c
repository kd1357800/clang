#include <stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

//関数プロトタイプ宣言
void display(void);
int enqueue(int d);
int dequeue(int* pd);

//メイン関数
main()
{
	int key, data, result;

	do
	{
		printf("\n\n◆エンキューはi、デキューはoを入力して＞");
		key = getche();
		printf("\n");
		//エンキュー処理
		if (key == 'i')
		{
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n※ ※ ※ キューが一杯です ※ ※ ※\n");
			}
			else
			{
				display();
			}
		}
		//デキュー処理
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n ※ ※ ※ キューは空です ※ ※ ※");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}
//キュー表示関数
void display(void)
{
	int i;

	printf("\n＝＝＝現在のキューの内容＝＝＝\n");
	for ( i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head)
		{
			printf("← headが示している所(現在はheadは%d)", head);
		}
		if (i == tail)
		{
			printf("← tailが示している所(現在はtailは%d)", tail);
		}
		printf("\n");
	}
	return;
}
//キューにデータを入れる(エンキューする)関数
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head)//キューが一杯の時
	{
		printf("tail = %d\nhead = %d\nQUEUESIZE = %d\n(%d + 1) ÷ %d あまり%d == head", tail, head, QUEUESIZE, tail, QUEUESIZE, (tail + 1) % QUEUESIZE);
		return -1;
	}
	queue[tail] = d;
	tail++;

	tail = tail % QUEUESIZE;
	return 0;
}
//キューからデータを取り出す(デキューする)関数
int dequeue(int *pd)
{
	if (head == tail) { return -1; }//キューが空の時

	*pd = queue[head];

	queue[head] = 0;//確認しやすくするため
	head++;

	head = head % QUEUESIZE;

	return 0;
}