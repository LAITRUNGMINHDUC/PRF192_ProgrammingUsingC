#include <stdio.h>

int isFibonanci(int n)
{
	int t1=1, t2=1, f=1, i;
	while (f<n)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f==n;
}

int main()
{
	int n;
	
	do
	{
		printf("N = "); scanf("%d", &n);
	} while (n<1);

	isFibonanci(n) ? printf("is Fibonanci"):printf("isn't Fibonanci");
	getchar();getchar();
	return 0;
}