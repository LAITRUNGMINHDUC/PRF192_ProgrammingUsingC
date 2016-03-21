#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intRandom(int min, int max)
{	
	return min + rand()%(max-min);
}

int main()
{
	int total = 0;
	do
	{
		printf("Total sought : ");
		scanf("%d", &total);
	} while (total < 2 || total > 12);
	int count = 1;
	int x, y;

	srand(time(NULL)); // Must run at once during runtime and before run random
	do
	{
		x = intRandom(1, 10);
		y = intRandom(1, 10);		
		printf("Result of picks %d and %d : %d + %d \n", count, count+1, x, y );
		count = count + 2;
	} while (x + y != total);
	printf("You got your total in %d picks!", count-1);
	getchar();
	return 0;
}
