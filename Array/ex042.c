#include <stdio.h>
main()
{
	char data[] = "Apple";//初期値がある場合[]は指定なしでも初期値と同じ数になる
	int i;

	printf("1文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c\n", data[i]);
	}

	printf("\n文字列で表示\n");
	//printf("%s", &data[0]);//%sのときはアドレスを指定、&data[指定]
	printf("%s", data);		//配列名だけ書くと先頭アドレスを表す、data + 指定
							//指定されたアドレスから\0まで表示         
}