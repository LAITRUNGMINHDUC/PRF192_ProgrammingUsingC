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
		x = intRandom(2, 6);
		y = intRandom(2, 6);
		printf("Result of throw %d : %d + %d\n", count, x, y);
		count = count + 1;
	} while (x + y != total);

	getchar();
	return 0;
}
