#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct 
{
	char Code[15];
	char Make[20];
	int Power;
	int Impedance;
} structSpeakers;

int Menu()
{
	int choice;
	system("cls"); fflush(stdin);
	printf("1. Add new speaker \n");
	printf("2. Edit speaker \n");
	printf("3. List speakers by power ascending \n");
	printf("4. Quit \n");
	do
	{
		printf("Your choice: "); scanf("%d", &choice);
		printf("\n");
	} while (choice < 1 || choice > 4);
	return choice;
}

void addSpeaker(structSpeakers *Speakers, int *n)
{
	if (*n < MAX)
	{
		structSpeakers Temp;
		fflush(stdin);
		printf("Code: "); gets(Temp.Code);
		printf("Make: "); gets(Temp.Make);
		do
		{
			printf("Power: "); scanf("%d", &Temp.Power);	
		} while (Temp.Power < 1);
		do
		{
			printf("Impedance: "); scanf("%d", &Temp.Impedance);
		} while (Temp.Impedance < 1);		

		Speakers[*n] = Temp;
		*n = *n + 1;
		printf("\nAdd speaker succeedfully");
	} else printf("\nArray overflow");
	printf("\n");
	system("pause");
}

int updateSpeaker(structSpeakers *Speakers, int n)
{
	fflush(stdin);
	char Code[15];
	structSpeakers Temp;
	printf("Search code: "); gets(Code);

	int i;
	for(i=0; i<n; i++)
	{
		int check = strcmp(Speakers[i].Code, Code);
		if (check == 0) 
		{
			Temp = Speakers[i];
			printf("\n");
			printf("Modify Make: "); gets(Temp.Make);
			do
			{
				printf("Modify Power: "); scanf("%d", &Temp.Power);
			} while (Temp.Power < 1);
			do
			{
				printf("Modify Impedance: "); scanf("%d", &Temp.Impedance);
			} while (Temp.Impedance < 1);		
			Speakers[i] = Temp;
			printf("Update succeedfully");
			printf("\n");
			system("pause");			
			return 1;
		}
	}
	printf("Not found");
	printf("\n");
	system("pause");			
	return 0;
	
}

int compare(int Val1, int Val2)
{
	if (Val1 == Val2) return 0;
	if (Val1 > Val2) return 1;
	if (Val1 < Val2) return -1;
}

void sort(structSpeakers *Speakers, int n)
{
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
		{
			int cmpPow = compare(Speakers[j].Power, Speakers[j-1].Power);
			int cmpImp = compare(Speakers[j].Impedance, Speakers[j-1].Impedance);
			
			if ((cmpPow > 0) || ((cmpPow==0) && (cmpImp < 0)))
			{
				structSpeakers Temp = Speakers[j];
				Speakers[j] = Speakers[j-1];
				Speakers[j-1] = Temp;
			}			
		}

	for (i=0; i<n; i++)
	{
		printf("Index %d: %s - %s - %d - %d \n", i, Speakers[i].Code, Speakers[i].Make, Speakers[i].Power, Speakers[i].Impedance);
	}
	printf("\n");
	system("pause");
}



int main()
{
	structSpeakers Speakers[MAX];
	int n = 0;

	do
	{
		int choice = Menu();
		switch(choice)
		{
			case 1: addSpeaker(Speakers, &n); break;
			case 2: updateSpeaker(Speakers, n); break;
			case 3: sort(Speakers, n); break;
			case 4: exit(1);
		}
	} while (1);
}
