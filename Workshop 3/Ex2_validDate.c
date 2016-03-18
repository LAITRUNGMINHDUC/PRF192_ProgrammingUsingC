#include <stdio.h>
#include <math.h>

int validDate(int d, int m, int y)
{
	int max_day = 31;

	if (d<1 || d>31 || m<1 || m>12)
	{
		return 0;
	}

	switch(m)
	{
		case 4:
		case 6:
		case 9:
		case 11:
			max_day = 30;break;
	}

	if ((y%400==0) || (y%4==0 && y%100!=0))
	{
		max_day = 29;
	}
	else max_day = 28;

	return d<=max_day;
}

int main()
{
	int d, m, y;
	printf("Type D/M/Y = "); scanf("%d/%d/%d", &d, &m, &y);
	if (validDate(d, m, y))
	{
		printf("Valid Date");
	}
	else printf("Invalid Date");
	
	getchar();getchar();
	return 0;
}
