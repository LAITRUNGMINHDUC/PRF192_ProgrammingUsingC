#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
	typedef struct
	{
		char Code[8];
		char Name[20];
		double Salary;
		double Allowance;
	} Employee;	
	
void printTemplate(Employee *Data, int position)
{
	Employee Temp = Data[position];
	printf("Index: %d \n", position);
	printf("Code: "); puts(Data[position].Code);
	printf("Name: "); puts(Data[position].Name);
	printf("Salary: %lf \n",Data[position].Salary);
	printf("Allowance: %lf \n", Data[position].Allowance);
	printf("\n");
}	

#include "Option1.c"
#include "Option2.c"
#include "Option3.c"
#include "Option4.c"

int Menu()
{
	int choice;
	do
	{
		printf("\n1.	Adding a new employee \n");
		printf("2.	Find data about employees using a name inputted.\n");
		printf("3.	Remove an employee based on a code inputted\n");
		printf("4.	Print the list in descending order based on salary + allowance \n");
		printf("5.	Exit \n");
		fflush(stdin);
		printf("Your choose : "); scanf("%d", &choice);
	} while (choice > 5 || choice < 1);
	return choice;
}

int main()
{
	int n = 0; Employee Data[MAX]; int choose;
	do 
	{
		system("cls");
		choose = Menu();
		switch(choose)
		{			
			case 1: fflush(stdin); Option1(Data, &n); break;
			case 2: fflush(stdin); Option2(Data, n); break;
			case 3: fflush(stdin); Option3(Data, &n); break;
			case 4: fflush(stdin); Option4(Data, n); break;
			default: fflush(stdin); exit(1);
		}
	} while (1);
}
