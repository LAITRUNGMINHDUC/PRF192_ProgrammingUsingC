#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int i;

int checkArray(double *array, int n)
{
	if (n == 0) 
	{
		printf("No elements \n");
		return 0;	
	}
	return 1;
}

void printArray(double *Array, int n)
{
	for (i=0; i<n; i++)
	{
		printf("Array[%d] : %lf \n",i, Array[i]);
	}
}

void printRange(double minVal, double maxVal, double *Array, int n)
{
	printf("Value from %lf to %lf : \n", minVal, maxVal);
	
	if (minVal > maxVal) 
	{
		double Temp;
		minVal = Temp;
		minVal = maxVal;
		maxVal = Temp;
	}
	
	for (i=0; i<n; i++)
	{
		if (Array[i] <= maxVal && Array[i]>=minVal)
		{
			printf("Array[%d] : %lf \n",i, Array[i]);
		}
	}
}
/*
void pointerSort(double *array, int n)
{
	int *i, *j, temp;
	for (i = array; i < array + n; i++ )
	{
		for (j = i+1; j < array + n; j++)
		{
			if (*j < *i)
			{
				temp = *j;
				*j = *i;
				*i = temp;
			}
		}
	}
}
*/

void Sort(double *array, int n)
{
	int i, j;
	double *temp;
	
	double **TempArray = (double**) calloc(n, sizeof(double*));
		for (i=0; i<n; i++) TempArray[i] = &array[i];
	
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
		if (*TempArray[j] > *TempArray[j-1])
		{
			temp = TempArray[j];
			TempArray[j] = TempArray[j-1];
			TempArray[j-1] = temp;
		}
	
	for (i=0; i<n; i++) printf("%lf ; ", *TempArray[i]);
	printf("\n");
	free(TempArray);
}

void searchValue(double x, double *Array, int n)
{
	int i; int check = 0;
	for (i=0; i<n; i++)
	{
		if (Array[i] == x) 
		{
			printf("Index: %d - Address: %u \n", i, &Array[i]);
			check = 1;
		}
	}
	check==0 ? printf("Value does not exist\n"):printf("\n");
}

void addValue(double x, double *Array, int *n)
{
	do
	{
		if (x!=0) 
		{
			Array[*n]=x;
			*n = *n + 1;	
		}
	} while (x==0 || *n>MAX);
}

int Menu()
{
	int choice;	
	printf("\n1- Add  a value \n");
	printf("2- Search a value \n");
	printf("3- Print out the array \n");
	printf("4- Print out values in a range \n");
	printf("5- Print out the array in ascending order \n");
	printf("Others- Quit \n");
	printf("Your choice = "); scanf("%d", &choice);
	printf("\n");
	return choice;	
}

void Option1(double *Array, int *n)
{
	double x; printf("Value: "); scanf("%lf", &x);
	addValue(x, Array, n);
}

void Option2(double *Array, int n)
{
	if (checkArray(Array, n))
	{
		double x;
		printf("Search: "); scanf("%lf", &x);
		searchValue(x, Array, n);	
	}	
}

void Option3(double *Array, int n)
{
	if (checkArray(Array, n))	printArray(Array, n);
}

void Option4(double *Array, int n)
{
	if (checkArray(Array, n))
	{
		double minVal, maxVal;
		printf("Type Range: "); scanf("%lf%lf", &minVal, &maxVal);
		printRange(minVal, maxVal, Array, n);
	}
}

void Option5(double *Array, int n)
{
	if (checkArray(Array, n)) Sort(Array, n);	
}

int main()
{
	int choice; int n = 0; 
	double Array[MAX];

	do
	{
		choice = Menu();
		switch (choice)
		{
			case 1: Option1(Array, &n); break;
			case 2: Option2(Array, n); break;
			case 3: Option3(Array, n); break;
			case 4: Option4(Array, n); break;
			case 5: Option5(Array, n); break;
			default: exit(1);
		}
	} while (1);	
}
