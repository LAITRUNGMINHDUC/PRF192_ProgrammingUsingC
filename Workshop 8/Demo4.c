#include <stdio.h>
#include <stdlib.h>
#define FILEINPUT "Array1.txt"
#define FILEOUTPUT "Array2.txt"

int exist(char* filename)
{
	int existed = 0;
	FILE* f = fopen(filename, "r");
	if (f!=NULL)
	{
		existed = 1;
		fclose(f);
	}
	return existed;
}

int fileToArray(char *filename, int *array, int *firstElement)
{
	if (!exist(filename)) 
	{
		printf("No file"); return 0;
	}

	FILE* f = fopen(filename, "r");
	fscanf(f, "%d", firstElement);
	int i;
	for (i=0; i<*firstElement; i++) fscanf(f, "%d", &array[i]);
	fclose(f);
	return 1;
}

void Sort(int sortType, int *array, int n)
{
	int i, j, t;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (((sortType==1) && (array[j] > array[j-1])) || ((sortType==2) && (array[j] < array[j-1]))) 
			/* 1 - Desc ; 2 - Asc*/
			{
				t = array[j];
				array[j] = array[j-1];
				array[j-1] = t;
			}
}

void print(int *array, int n)
{
	int i;
	for (i=0; i<n; i++) printf("%d ",array[i]);
}

int printToFileSort(char *filename, int *array, int n)
{
	if (exist(filename))
	{
		printf("File existed, overwrite (Y/N): "); 
		if (toupper(getchar())=='N') return 0;
	}

	FILE* f = fopen(filename, "w");
	fprintf(f, "%d", n);
	int i;
	for (i=0; i<n; i++) fprintf(f, " %d ", array[i]);
	fclose(f);
}

int main(int argc, char const *argv[])
{
	char fileInput[] = FILEINPUT;
	char fileOutput[] = FILEOUTPUT;
	int array[200]; int n=0;
	fileToArray(fileInput, array, &n);
	Sort(2, array, n);
	print(array, n);
	printToFileSort(fileOutput, array, n);
	system("pause");
	return 0;
}
