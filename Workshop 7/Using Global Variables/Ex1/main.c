#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

char Student[100][20];
int N = 0;
char Name[20];

void askName(char *Name)
{	
	printf("\nStudent name : "); gets(Name); fflush(stdin);
}

#include "Option1.c"
#include "Option2.c"
#include "Option3.c"
#include "Option4.c"

int Menu()
{
	int choice;
	printf("\n1- Add a student \n");
	printf("2- Remove a student \n");
	printf("3- Search a student \n");
	printf("4- Print the list in ascending order \n");
	printf("5- Quit \n");
	do
	{
		printf("Your choice : "); scanf("%d", &choice);
		fflush(stdin);
	} while (choice > 5);
	return choice;
}

int main()
{
	int choice;
	do
	{
		choice = Menu();
		switch (choice)
		{
			case 1: Option1(); break;
			case 2: Option2(); break;
			case 3: Option3(); break;
			case 4: Option4(); break;
			case 5: exit(1);
		}
	} while (choice != 5);
}
