/* DE 01 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Menu()
{
	int choice;
	double temp;
	printf("\n");
	printf("1- Quit\n");
	printf("2- Question 2\n");
	printf("3- Question 3\n");
	do
	{
		fflush(stdin);
		printf("Your choice: "); scanf("%lf", &temp);
		choice = (int) temp;	
	} while (choice < 1 || choice > 3);
	return choice;	
}

void Option1()
{
	int n;
	double temp;
	printf("\nYou choose Option 2\n");
	do
	{
		printf("N = "); scanf("%lf", &temp);	
		n = (int) temp;
	} while (n<2 || n>9);
	
	int i;
	for (i=1; i<10; i++)
	{
		printf("%dx%d=%d\n", n, i, n*i);
	}
}

void Option2()
{
	/* Input */
	double xC, yC;
	printf("\nYou choose Option 2\n");
	printf("xC = "); scanf("%lf", &xC); fflush(stdin);
	printf("yC = "); scanf("%lf", &yC); fflush(stdin);
	
	double r;
	do
	{
		fflush(stdin);
		printf("R = "); scanf("%lf", &r);
	} while (r<=0);
	
	double x, y;
	printf("X = "); scanf("%lf", &x);
	printf("Y = "); scanf("%lf", &y);
	/* =================================== */
	
	double dx, dy, d;
	dx = xC - x;
	dy = yC - y;
	d = sqrt(dx*dx + dy*dy);
	
	if (d > r) printf("The point is out of the circle \n");
	if (d < r) printf("The point is in the circle \n");
	if (d == r) printf("The point is on the circle \n");
}

int main()
{
	int choice;
	do 
	{
		fflush(stdin);system("cls");
		choice = Menu();
		switch(choice)
		{
			case 1: exit(1);
			case 2: Option1(); break;
			case 3: Option2(); break;
		}
		printf("\n");
		system("pause");
	} while (1);
}
