#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char c;
	int nA, nD, nO;
	nA = nD = nO = 0;
	
	printf("Enter string : ");
	do
	{
		c = getchar();
		if (isalpha(c)) nA++;
		else if (isdigit(c)) nD++;
		else if (c!='\n') nO++;	
	} while(c!='\n');
	
	printf("Digit = %d, Alpha = %d, Other = %d \n", nD, nA, nO);
	system("pause");
}
