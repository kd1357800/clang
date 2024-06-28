#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	//char* p_day;
	//p_day = day;

	for (int i = 0; i < 7; i++)//,p_day++
	{
		puts(&day[i][0]);
	}
}