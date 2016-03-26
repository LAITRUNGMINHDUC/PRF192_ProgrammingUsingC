#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct SoftDrink
{
	char name[20];
	char make[20];
	int volume;
	int price;
	int duration;
} Database[MAX];

int N = 0;

void printData(struct SoftDrink *Database[MAX], int position)
{
	printf("=====================\n");
	printf("Name : %s \n", Database[position].name);
	printf("Make : %s \n", Database[position].make);
	printf("Volume : %d \n", Database[position].volume);
	printf("Price : %d \n", Database[position].price);
	printf("Duration : %d \n", Database[position].duration);
	printf("=====================\n");
}

int Menu()
{
	
}

#include "Option1.c"
#include "Option2.c"
#include "Option3.c"
#include "Option4.c"

int main()
{
	int choose;
	do
	{
		choose = Menu();
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
	}
	while (choose < 5);
	Option1();
	Option2();
	Option3();
	Option4();
}


