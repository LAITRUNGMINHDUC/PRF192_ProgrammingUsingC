#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILEINPUT "Ex6In.txt"
#define FILEOUTPUT "Ex6Out.txt"

typedef struct 
{
	char Name[30];
	char Address[50];
	int Mark;
} structStudents;

int exist(char *filename)
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


int fileToStruct(char *filename, structStudents *Student, int *n)
{
	if (!exist(filename)) 
	{
		printf("No file");
		return 0;
	}
	FILE* f = fopen(filename, "r");
	while (fscanf(f, "%40[^;];%40[^;];%d%*c", Student[*n].Name, Student[*n].Address, &Student[*n].Mark)==3)
	{
		*n = *n + 1;
	}	
	fclose(f);
	return 1;
}

void sortByMark(structStudents *Student, int n)
{
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (Student[j].Mark > Student[j-1].Mark)
			{
				structStudents Temp = Student[j];
				Student[j] = Student[j-1];
				Student[j-1] = Temp;
			}
}

int printFile(char *filename, structStudents *Student, int n)
{
	int i;
	if (exist(filename))
	{
		printf("File existed, overwrite (Y/N): "); 
		if (toupper(getchar())=='N') return 0;
	}	
	FILE* f = fopen(filename, "w");
	for (i=0; i<n; i++) fprintf(f, "%s; %s; %d \n", Student[i].Name, Student[i].Address, Student[i].Mark);
	fclose(f);
	return 1;
}

int main()
{
	char inputFile[] = FILEINPUT;
	char outputFile[] = FILEOUTPUT;
	structStudents Student[200]; int n=0;
	
	if (fileToStruct(inputFile, Student, &n))
	{
		sortByMark(Student, n);
		if (printFile(outputFile, Student, n))
		{
			printf("Hello");
			return 1;
		}
	}
	return 0;
}
