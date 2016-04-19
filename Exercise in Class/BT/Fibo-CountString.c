#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Option 1 : Fibonanci (n)*/
int Fibo(int n);
void Option1();
/* Option 2 : Count Word in String */
char* trimSpace(char String[]);
void Option2();
/* Main Program */

int Menu()
{
	int choice;
	do
	{
		system("cls");
		printf("1. Fibo (n) \n");
		printf("2. Count Words\n");
		printf("3. Quit\n");
		printf("Your choice: "); scanf("%d", &choice);
	} while (choice < 1 || choice > 3);
	return choice;
}

int main()
{
	int choice;
	do
	{
		choice = Menu();
		switch(choice)
		{
			case 1: Option1(); system("pause"); break;
			case 2: fflush(stdin); Option2(); system("pause"); break;
			case 3: exit(1);
		}
	}
	while (choice == 1 || choice == 2);		
}

/* Option 1 */
int Fibo(int n)
{
	if (n<=2) return 1;
	return Fibo(n-2) + Fibo(n-1);
}

void Option1()
{
	int n;
	do
	{
		fflush(stdin);
		printf("N = "); scanf("%d", &n);
	} while (n<0);
	printf("Fibo (%d) = %d", n, Fibo(n));
}

/* Option 2 */
char* lTrim(char String[])
{
	int i = 0;
	while (String[i] == ' ') i++;
	if (i>0) strcpy(&String[0], &String[i]);
	return String;	
}

char* rTrim(char String[])
{
	int i = strlen(String) - 1;
	while (String[i] == ' ') i--;
	String[i+1] = '\0';	
	return String;
}

char* trimSpace(char String[])
{
	rTrim(String);
	lTrim(String);
	/* Trim Space all */		
	char *ptr = strstr(String, "  ");
	while (ptr != NULL)
	{
		strcpy (ptr, ptr+1);
		ptr = strstr(String, "  ");
	}	
	return String;
}

void Option2()
{
	char String[200]; int i; int count = 0;
	printf("Your String: "); gets(String);
	trimSpace(String);
	for (i=0; i< strlen(String); i++)
	{
		if (String[i] == ' ') count++;
	}
	count++;
	printf("There are %d Words", count);
}
