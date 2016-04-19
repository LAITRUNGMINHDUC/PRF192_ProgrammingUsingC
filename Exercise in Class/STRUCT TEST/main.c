#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char Name[20];
	double Price;
} Drinks;

void input(Drinks *Data, int *n)
{
	int i;
	printf("N = "); scanf("%d", n);	
	for (i=0; i<*n; i++)
	{
		fflush(stdin);
		printf("Name: "); gets(Data[i].Name);
		printf("Price: "); scanf("%lf", &Data[i].Price);
	}
}

void output(Drinks *Data, int *n)
{
	int i;
	printf("Output \n");
	for (i=0; i<*n; i++)
	{
		printf("%d - Name: %s \n", i, Data[i].Name);
		printf("%d - Price: %lf \n", i, Data[i].Price);
	}
}

void Option(Drinks *Data, int *n)
{
	input(Data, n);
	output(Data, n);
}

int main()
{
	Drinks Data[20];
	int n=0;
	Option(Data, &n);
	system("Pause");
	return 0;
}
