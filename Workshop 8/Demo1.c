#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0

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

int writeFile (char* filename)
{
	char c;
	int CTRL_Z = -1;
	if (exist(filename))
	{
		printf("Existed => Overwrite (Y/N): ");
		if (toupper(getchar()) == 'N') return FALSE;
	}

	FILE *f = fopen(filename, "w");
	fflush(stdin);
	do
	{
		c = getchar();
		if (c!=CTRL_Z) fputc(c,f);
	}
	while (c!=CTRL_Z);
	fclose(f);
	return TRUE;
}

int main(int argc, char *argv[])
{
	/* code */
	if (argc != 2) printf("Error syntax \n");
	else if (writeFile(argv[1]))
	{
		printf("Write succeedfully");
	}
	else 
	{
		printf("Write Failed \n");
	}
	system("pause");
	return 0;
}
