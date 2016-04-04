#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "Option1.c"
#include "Option2.c"

int Menu()
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
	int choose = Menu();
	switch (choose)
	{
		case 1: Option1(); break;
		case 2: Option2(); break;
		case 3: return 0;
	}	
	system("pause");
}
