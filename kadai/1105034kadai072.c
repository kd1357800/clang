#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	moji = getchar();

	switch (moji)
	{
	case 'a':
	case 'A':
		printf("America\n");
		printf("Australia\n");
		break;
	case 'e':
	case 'E':
		printf("England\n");
		break;
	case 'f':
	case 'F':
		printf("France\n");
		break;
	case 'j':
	case 'J':
		printf("Japan\n");
		break;
	default:
		break;
	}
}