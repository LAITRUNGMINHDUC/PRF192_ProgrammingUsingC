#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define FILEINPUT "AssignmentInput.txt"
#include "TrimFunc.c"

void PauseCLS()
{
	fflush(stdin); printf("\n"); system("pause"); system("cls");
}


int Menu()
{
	int choice;
	printf("\n");
	printf("0.	Input student name from Files\n");
	printf("1.	Input student name \n");
	printf("2.	Search student name \n");
	printf("3.	View search history \n");
	printf("4.	List all the name in ascending order \n");
	printf("5.	Quit the program \n");

	do
	{
		printf("Choice: "); scanf("%d", &choice);
	} while (choice < 0 || choice > 5);
	return choice;
}

void generateName(char *filename, char Student[][50], int *n)
{
	FILE *f = fopen(FILEINPUT, "r");	
	printf("\n");
	printf("Data in File:\n");
	if (f != NULL)
	{
		while (fscanf(f, "%[^\n]%*c", Student[*n])>0) 
		{
			nameStr(Student[*n]);
			puts(Student[*n]);
			*n = *n + 1;			
		}
	} else printf("No Input Data Detected");
	fclose(f);
	PauseCLS();
}


void addName(char Student[][50], int *n)
{
	char Continue; char Temp[50];
	do
	{
		fflush(stdin); printf("\n");
		if (*n < MAX)
		{
			printf("Student name: "); gets(Temp);
			nameStr(Temp); strcpy(Student[*n], Temp);
			*n = *n + 1;
			printf("Add new student OK \n");			
		}
		else
		{
			printf("Add new student failed \n");
		}	
		printf("Continue (Y/N): ");
		if (toupper(getchar()) == 'N') Continue = 'N';
		else Continue = 'Y';
	} while (Continue != 'N');
	PauseCLS();
}

void searchName (char Student[][50], int n, char History[][50], int *m)
{
	if (n == 0) 
	{
		printf("\nNo items inside\n");
		PauseCLS();
		return;
	}
	
	char Continue;
	do
	{
		char Temp[50]; int check = 0; int i; 
		char Temp2[50];
		fflush(stdin); printf("\n");
		printf("Search name: "); gets(Temp);

		strcpy(History[*m], Temp); *m = *m + 1;
		
		for (i=0; i<n; i++)
		{
			strcpy(Temp2, Student[i]); 
			strlwr(Temp2); strlwr(Temp); trimSpace(Temp);
			if (strstr(Temp2, Temp) != NULL)
			{
				printf("Index %d - %s \n", i, Student[i]);
				check = 1;
			}			
		}
		if (check == 0) printf("Not found \n");		

		printf("Continue (Y/N): ");
		if (toupper(getchar()) == 'N') Continue = 'N';
		else Continue = 'Y';
	} while (Continue != 'N');
	PauseCLS();
}

void printHistory(char History[][50], int m)
{
	if (m == 0) 
	{
		printf("\nNo items inside\n");
		PauseCLS();
		return;
	}

	int i;
	for (i=0; i<m; i++) printf("%s \n", History[i]);
	PauseCLS();
}

void sort(char Student[][50], int n)
{
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(Student[j], Student[j-1]) < 0)
			{
				char Temp[50];
				strcpy(Temp, Student[j]);
				strcpy(Student[j], Student[j-1]);
				strcpy(Student[j-1],Temp);
			}
	for (i=0; i<n; i++) printf("%s \n", Student[i]);
	PauseCLS();
}

int main()
{
	int choice; char Student[MAX][50]; char History[MAX][50];
	int n = 0; int m = 0;

	do
	{
		choice = Menu();
		switch (choice)
		{
			case 0: generateName(FILEINPUT, Student, &n); break;
			case 1: addName(Student, &n); break;
			case 2: searchName(Student, n, History, &m); break;
			case 3: printHistory(History, m); break;
			case 4: sort(Student, n); break;
			case 5: puts("Bye Bye Bye \n"); system("pause"); exit(1);
		}
	} while (1);
}
