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

void Option1_Input_and_Process()
{
	int d, m, y;
	printf("You choose : 1 - Processing date data \n");
	printf("Type D/M/Y = "); scanf("%d/%d/%d", &d, &m, &y);
	if (validDate(d, m, y))
	{
		printf("Valid Date");
	}
	else printf("Invalid Date");
}

void Option2_Input_and_Process()
{
	char c1, c2, temp;	
	printf("You choose : 2 - Character data \n \n");
	printf("Type 2 characters with Space between : ");
	scanf("%c %c", &c1, &c2);
	
	if (c1 > c2)
	{
		temp = c1;
		c1 = c2;
		c2 = temp;
	}	

	int i = c1;	
	for (i; i <= c2; i++)
	{
		printf("%c : %d, %o, %X\n", i, i, i, i);
	}
}

int chooseMenu()
{
	int choice = 0;
	printf("1 - Processing date data \n");
	printf("2 - Character data \n");
	printf("3 - Quit \n");
	do
	{
		printf("Your choice : "); scanf("%d", &choice);
	} while (choice < 1 && choice > 4);	
	printf("==========================\n");
	return choice;
}

int main()
{
	int choice = chooseMenu();
	switch (choice)
	{
		case 1: Option1_Input_and_Process(); break;
		case 2: getchar(); Option2_Input_and_Process(); break;
		case 3: return 0;
	}
	getchar(); getchar();
	return 0;
}

