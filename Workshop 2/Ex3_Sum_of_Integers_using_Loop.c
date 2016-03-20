#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	int Sum = 0;
	
	do
	{
		printf("Add to Sum (Type 0 to Stop) : ");
		scanf("%d", &x);
		Sum = Sum + x;
	} while (x != 0);

	printf("Sum = %d", Sum);

	getchar();
	return 0;
}
