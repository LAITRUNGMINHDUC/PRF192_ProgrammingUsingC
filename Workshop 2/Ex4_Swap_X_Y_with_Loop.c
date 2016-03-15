#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	int t;
	printf("Type X = 0, Y = 0 to STOP \n");
	do
	{
		printf("X = ");scanf("%d", &x);
		printf("Y = ");scanf("%d", &y);		
		t = x;
		x = y;
		y = t;
		printf("After Swap: \n");
		printf("X = %d\n", x);
		printf("Y = %d\n", y);
		printf("========================= \n");
	} while (x != 0 && y != 0);
}

