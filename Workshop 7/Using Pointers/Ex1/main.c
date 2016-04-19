#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TrimFunc.c"
#define MAX 200

typedef struct 
{
	char Name[20];
} Students;

int addStudent(char *Content, char *Student, int *n)
{	
	if (*n < MAX)
	{		
		Student[*n] = Content;
		*n = *n + 1;
		return 1;	
	}
	return 0;
}

int removeStudent(char *Name, char *Student, int *n)
{
	int i; int exist = 0;
	puts(Name);
	for (i=0; i<*n; i++)
		//if (strcmp(Student[i], Name) == 0) 
		if (Student[i] == Name) 
		{
			printf("Fuck");
			int j;
			for (j=i-1; j<*n; j++) strcpy(Student[i], Student[i+1]);
			*n = *n - 1;
			exist = 1;
		}
	return exist;
}

int searchStudent(char *Name, char *Student, int n)
{
	int i;
	for (i=0; i<n; i++)
		if (Student[i] == Name) 
		{
			printf("\n Index: %d", i);
			puts(Student[i]);
			puts(Name);	
		}
	return -1;
}

void sortStudent(char *Student, int n)
{
	int i, j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (Student[j] > Student[j-1])
			{
				char *Temp;
				//strcpy(Temp, Student[j]);
				//strcpy(Student[j], Student[j-1]);
				//strcpy(Student[j-1], Temp);
				Temp = Student[j];
				Student[j] = Student[j-1];
				Student[j-1] = Temp;
			}
	for (i=0; i<n; i++)
	{
		printf ("\n %s", Student[i]);
	}
}

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

void askName(char* Content)
{
	fflush(stdin);
	printf("\nStudent name: "); gets(Content);
	strupr(trimSpace(Content));	puts(Content);
}

int main()
{
	char Content[200];
	char Student[200][200];
	int n = 0;

	do
	{
		system("cls");
		int choice = Menu();
		switch(choice)
		{
			case 1:
				askName(Content);
				addStudent(Content, Student, &n);
				printf("\nAdd successfully");
				break;
			case 2:
				askName(Content);
				removeStudent(Content, Student, &n);
				break;
			case 3:
				askName(Content);
				searchStudent(Content, Student, n);
				break;
			case 4:
				sortStudent(Student, n);
				break;
			case 5: exit(1);
		}
		printf("\n"); system("pause");
	} while (1);
}
