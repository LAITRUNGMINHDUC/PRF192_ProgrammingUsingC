#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15
#define MaxRule 10

/* char Input[MAX]; */

void inputISBN(char *Input)
{
	printf("ISBN: "); gets(Input);		
}
int validateISBN(char *Input)
{
	int i; int sum = 0; int temp;
	
	/* Validate Input */
	if (strlen(Input) != MaxRule) return 0;
	for (i=0; i<MaxRule; i++)
		if (!isdigit(Input[i])) return 0;
	
	/* Validate by rule ISBN */
	int Rule[]={10,9,8,7,6,5,4,3,2};
	for (i=0; i<MaxRule-1; i++)
		sum = sum + Rule[i]*(Input[i] - '0');
	sum = sum + (Input[9] - '0');
	if (sum%11==0) return 1;
	else return 0;	
}
int main()
{
	char Input[MAX];	
	inputISBN(Input);
	validateISBN(Input) ? printf("Valid ISBN"):printf("InValid ISBN");
	printf("\n");
	system("pause");
}	
