#include <stdio.h>
main()
{
	int h,m, s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &s);
	if (s < 5000)
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·", h, m, s);
	}
	else
	{
			printf("“ü—Í’l‚Í5000‚Ü‚Å‚Å‚·");
	}
}