#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct 
{
	char name[20];
	char make[20];
	int volume;
	int price;
	int duration;
} Drinks;

void printTemplate(Drinks *MyDrinks, int position);

#include "Option1.c"
#include "Option2.c"
#include "Option3.c"
#include "Option4.c"

int Menu()
{
	int choice;
	do
	{
		fflush(stdin);
		printf("\nMenu \n");
		printf("1-	Adding a new soft drink");printf("\n");
		printf("2-	Printing out items which belong to a known make."); printf("\n");
		printf("3-	Printing out items whose volumes are between v1 and v2 ( integers)"); printf("\n");
		printf("4-	Printing the list in ascending order based on volumes then prices."); printf("\n");		
		printf("5- 	Exit."); printf("\n");		
		printf("Choose: "); scanf("%d", &choice);
	} while (choice < 0 || choice > 5);
	return choice;
}

int main()
{
	int n = 0; int choice;
	Drinks MyDrinks[MAX];

	do
	{
		choice = Menu();
		switch(choice)
		{
			case 1: Option1(MyDrinks, &n); break;
			case 2: Option2(MyDrinks, n); break;
			case 3: Option3(MyDrinks, n); break;
			case 4: Option4(MyDrinks, n); break;
			default: exit(1);
		}
	} while (choice < 5);	
}

void printTemplate(Drinks *MyDrinks, int position)
{
	printf("===== Index: %d =====\n", position);
	printf("Name : %s \n", MyDrinks[position].name);
	printf("Make : %s \n", MyDrinks[position].make);
	printf("Volume : %d \n", MyDrinks[position].volume);
	printf("Price : %d \n", MyDrinks[position].price);
	printf("Duration : %d \n", MyDrinks[position].duration);
	printf("=====================\n");	
}
