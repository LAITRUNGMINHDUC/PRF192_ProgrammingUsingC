#include <stdio.h>
#include <math.h>

int intRandom(int min, int max)
{

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
	do
	{
		int x = intRandom(2, 6);
		int y = intRandom(2, 6);
		printf("Result of throw %d : %d + %d\n", count, x, y);
		count = count + 1;
	} while (x + y != total);

	getchar();
	return 0;
}