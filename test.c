#include <stdio.h>
#include <conio.h>
main()
{
	int su, key = 0;
	while (key != 'e')
	{
		printf("\no:8�i�������\td:10�i�������\th:16�i�������\ne:�I��\n");
		key = getche();
		switch (key)
		{
		case 'o':
			printf("\n8�i����");
			scanf("%o", &su);
			printf("10�i����%d\t16�i����%x\n", su, su);
			break;
		case 'd':
			printf("\n10�i����");
			scanf("%d", &su);
			printf("8�i����%o\t16�i����%x\n", su, su);
			break;
		case 'h':
			printf("\n16�i����");
			scanf("%x", &su);
			printf("8�i����%o\t10�i����%d\n", su, su);
			break;
		default:
			break;
		}
	}
}
