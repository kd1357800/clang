#include <stdio.h>
#include <conio.h>
main()
{
	int su, key = 0;
	while (key != 'e')
	{
		printf("\no:8進数を入力\td:10進数を入力\th:16進数を入力\ne:終了\n");
		key = getche();
		switch (key)
		{
		case 'o':
			printf("\n8進数＞");
			scanf("%o", &su);
			printf("10進数＝%d\t16進数＝%x\n", su, su);
			break;
		case 'd':
			printf("\n10進数＞");
			scanf("%d", &su);
			printf("8進数＝%o\t16進数＝%x\n", su, su);
			break;
		case 'h':
			printf("\n16進数＞");
			scanf("%x", &su);
			printf("8進数＝%o\t10進数＝%d\n", su, su);
			break;
		default:
			break;
		}
	}
}
