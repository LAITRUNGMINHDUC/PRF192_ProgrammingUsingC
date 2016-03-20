#include <stdio.h>
#define count 7

void DrawZ()
{
	int i, j;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count; j++)
		{
			if (i == 0 || i == (count -1) || j == (count - i)) printf("*");			
			else  printf(" ");
		}
		printf("\n");
	}	
}

void DrawE()
{
	int i, j;
	for (i = 0; i < count; i++)
	{
		printf("*");
		for (j = 0; j < count - 1; j++)
		{
			if (i == 0 || i == (count/3 + 1) || i == (count - 1)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

void DrawN()
{
	int i, j;
	for (i = 0; i < count; i++)
	{		
		for (j = 0; j < count; j++)
		{
			if (j == 0 || j == count - 1 || i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

void DrawT()
{
	int i, j;
	for (i = 0; i < count; i++)
	{		
		for (j = 0; j < count; j++)
		{
			if (i == 0 || j == count/2) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

int main()
{
	DrawZ(); printf("---------------\n");
	DrawE(); printf("---------------\n");
	DrawN(); printf("---------------\n");
	DrawT(); printf("---------------\n");
	getchar();
}
