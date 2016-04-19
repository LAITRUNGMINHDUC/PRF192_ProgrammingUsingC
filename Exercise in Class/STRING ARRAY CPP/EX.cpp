#include <stdio.h>
#include <stdlib.h>

#define MAXN 30
#define MAXLEN 50

void input (char list[][MAXLEN], int &n)
{
	do
	{
		printf("Number of string (1 -> %d): ", MAXN);
		scanf("%d", &n);
	} while (n<1 || n>MAXN);
	
	for (int i=0; i<n; i++)
	{
		printf("String %d/%d: ", i+1, n);
		fflush(stdin);
		scanf("%50[^\n]", list[i]);
	}
}

void output (char list[][MAXLEN], int n)
{	
	for (int i=0; i<n; i++) puts(list[i]);
}

int main()
{
	int n;
	char list[MAXN][MAXLEN];
	
	puts("Type your string array: \n"); input(list, n);
	puts("Output string array: \n"); output(list, n);	
	puts("\n"); system("pause");
	return 0;
}

