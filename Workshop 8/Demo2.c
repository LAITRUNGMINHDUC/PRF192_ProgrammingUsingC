#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int exist(char* filename)
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

int writeFile(char* filename)
{
	if (exist(filename))
	{
		printf("File %s is existed. Overwrite (Y/N): ", filename);
		if (toupper(getchar() == 'N')) return 0;
	}
	char line[201];
	int length = 0;

	FILE* f = fopen(filename, "w");
	fflush(stdin);

	do
	{
		gets(line); length = strlen(line);
		if (length > 0)
		{
			fputs(line, f); fputs("\n", f);
		}
		fflush(stdin);
	} while (length > 0);

	fclose(f); 
	return 1;
}

int printFile (char* filename)
{
	char c;
	if (!exist(filename))
	{
		printf("The file %s does not exist", filename);
		return 0;
	}
	FILE *f = fopen(filename, "r");
	while ((c=fgetc(f)) != EOF) putchar(c);
	fclose(f);
	return 1;
}

int main(int argCount, char* args[])
{
	char filename[81];
	printf("Enter filename: "); gets(filename);
	printf("Write file: \n");
	if (writeFile(filename))
	{
		printf("Data in File %s: \n", filename);
		if (!printFile(filename)) printf("Error! \n");
	}
	else printf("Write Fail!");
	system("pause");
	return 0;
}
