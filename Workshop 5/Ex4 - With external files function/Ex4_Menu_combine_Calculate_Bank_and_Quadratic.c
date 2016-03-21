#include <stdio.h>
#include <math.h>
#include "Ex4_Quadratic_equation.c"
#include "Ex4_Bank_deposit.c"

int chooseMenu()
{
	int choose;
	printf("1 - Quadratic equation \n");
	printf("2 - Bank deposit problem \n");
	printf("3 - Quit \n");	
	do
	{
		printf("Your choice : "); scanf("%d", &choose);
	} while (choose < 1 || choose > 4);
	return choose;
}

int main()
{
	int choose = chooseMenu();
	switch (choose)
	{
		case 1: AskPrintQuadratic(); break;
		case 2: AskPrintDeposit(); break;
		case 3: return 0;
	}
	getchar(); getchar();
	return 0;
}
