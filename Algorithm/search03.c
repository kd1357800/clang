#include <stdio.h>
main()
{
	int low, mid, high, s, d[10] = { 1,2,3,4,5,6,7,8,9,10 };
	low = 0;
	high = 10;

	printf("’Tõ’l‚ğ“ü—Í„");
	scanf("%d", &s);

	while (low <= high)//Œ©‚Â‚©‚é‚Ü‚ÅÅŒã‚Ü‚Å‚ÌğŒ®
	{
		mid = (low + high) / 2;

		if (s == d[mid])break;//’Tõ’l‚ªŒ©‚Â‚©‚Á‚½‚ç

		if (s > d[mid]){low = mid + 1;}//mid‚æ‚è’Tõ’l‚ª‘å‚«‚©‚Á‚½‚ç

		if (s < d[mid]){high = mid - 1;}//mid‚æ‚è’Tõ’l‚ª¬‚³‚©‚Á‚½‚ç
	}
	
	if (low > high)//ÅŒã‚Ü‚Å’T‚µ‚½‚©”Û‚©
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½",mid + 1);
	}
}