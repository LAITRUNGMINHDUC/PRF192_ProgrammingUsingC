#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c1, c2, temp;
	int difference;

	printf("Type 2 characters with Space between : ");
	scanf("%c %c", &c1, &c2);

	if (c1 > c2)
	{
		temp = c1;
		c1 = c2;
		c2 = temp;
	}

	difference = c2 - c1;

	printf("Difference between 2 char : %d\n", difference );
	printf("Ch : de, oc, He\n");
	
	int i = c1;	
	for (i; i <= c2; i++)
	{
		printf("%c : %d, %o, %X\n", i, i, i, i);
	}
}
