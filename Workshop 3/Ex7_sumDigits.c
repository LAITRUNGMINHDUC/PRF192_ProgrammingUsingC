#include <stdio.h>

int sumDigits(int n)
{
	int sum = 0;
	do
	{
		sum = sum + n%10;
		n = (int) n/10;
	} while (n>0);
	return sum;
}

int main()
{
	int n, Sum = 0;
	do
	{
		printf("N = "); scanf("%d", &n);
		if (n>=0)
		{
			Sum = sumDigits(n);
			printf("Result = %d",Sum);			
		}
	} while (n<0);
	
	getchar();getchar();
	return 0;
}
