#include <stdio.h>
#include <math.h>

int prime (int n)
{
	int m = sqrt(n);
	int i;

	if (n < 2) 
	{
		return 0;
	}

	for (i = 2; i<=m; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int n=0;
	int i=2;
	
	do
	{
		printf("N = "); scanf("%d", &n);
	} while (n<2);

	for (i; i < n; i++)
	{
		if (prime(i)==1)
		{
			printf("%d\n", i);
		}
	}
	getchar(); getchar();
	return 0;
}
