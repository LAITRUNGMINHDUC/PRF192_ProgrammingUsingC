#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
	struct MyData
	{
		char Code[8];
		char Name[20];
		double Salary;
		double Allowance;
	} Employee[100];
	int N = 0;
#include "Option1.c"
#include "Option2.c"
#include "Option3.c"
#include "Option4.c"

// Init Function
int chooseMenu();

int main(){
	int choose;
	do 
	{
		choose = chooseMenu();
		switch(choose)
		{
			//Template();
			case 1: Option1(); break;
			case 2: Option2(); break;
			case 3: Option3(); break;
			case 4: Option4(); break;
			case 5: exit(1);
		}
	} while (choose < 6 && choose != 5);
}

int chooseMenu()
{
	int choose;
	printf("1.	Adding a new employee \n");
	printf("2.	Find data about employees using a name inputted.\n");
	printf("3.	Remove an employee based on a code inputted\n");
	printf("4.	Print the list in descending order based on salary + allowance \n");
	printf("5.	Exit \n");
	printf("Your choose : "); scanf("%d", &choose);
	printf("====================================\n");
	return choose;
}

