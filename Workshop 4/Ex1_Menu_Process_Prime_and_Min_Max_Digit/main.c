#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Menu.c"
#include "CommonLibrary.c"
#include "Option1.c"
#include "Option2.c"

int main()
{
	int choose;
	
	do
	{
		choose = Menu();
		switch(choose)
		{
			case 1: Option1(); break;
			case 2: Option2();break;
			case 3:	exit(1);
		}
	} while (1);

	printf("\n");
	system("pause");
	return 0;
}
