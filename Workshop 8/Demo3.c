#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int exist(char *filename)
{
	int existed = 0;
	FILE* f = fopen(filename, "r");
	if (f != NULL)
	{
		existed = 1;
		fclose(f);
	}
	return existed;
}

int writeFile(char *filename)
{
	if (exist(filename))
	{
		printf("The file %s existed. Overwrite (Y/N): ",filename);
		if (toupper(getchar()) == 'N') return 0;
	}

	char line[201];
	int length = 0;

	FILE *f = fopen (filename, "w");	
	do
	{
		fflush(stdin);
		gets(line);
		length = strlen(line);
		if (length>0) fprintf(f, "%s\n", line);
	} while (length>0);
	
	fclose(f);
	return 1;
}

int printFile(char *filename)
{
	if (!exist(filename))
	{
		printf("No file"); return 0;
	}

	FILE* f = fopen(filename, "r");
	char line[201];
	while (fscanf(f, "%[^\n]%*c", line) > 0) puts(line);
	fclose(f);
	return 1;
}

int main(int argc, char const *argv[])
{
	char filename[81];
	printf("Filename: "); gets(filename);
	printf("Write File: \n");
	if (writeFile(filename))
	{
		printf("Data in File: \n");
		if (!printFile(filename)) printf("Error file");
	}
	else printf("Write failed\n");
	return 0;
}
