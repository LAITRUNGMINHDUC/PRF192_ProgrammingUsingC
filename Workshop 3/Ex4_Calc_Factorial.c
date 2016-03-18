#include <stdio.h>

double factorial (int n)
{
	double p=1.0;
	int i;

	for (i = 2; i <= n; i++)
	{
		p = p*i;
	}

	return p;
}

int main()
{
	int n;
	double result;
	do
	{
		printf("N = "); scanf("%d", &n);
	} while (n<0);

	result = factorial(n);
	printf("Factorial = %lf", result);

	return 0;
}