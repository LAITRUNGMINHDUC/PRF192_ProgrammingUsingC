#include <stdio.h>

int GCD(int a, int b)
{
	while (a!=b)
	{
		if (a>b) 
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

int LCM (int a, int b)
{
	return a*b/GCD(a,b);
}

int main()
{
	int a, b;
	do
	{
		printf("Type A,B = ");scanf("%d,%d", &a, &b);
	} while (a<=0 || b<=0);

	printf("GCD = %d - LCM = %d", GCD(a,b), LCM(a,b));

	getchar(); getchar();
	return 0;
}