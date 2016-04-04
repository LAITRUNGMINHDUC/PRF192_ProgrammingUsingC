// Input static array, output the Maximum, output the array
#include <stdio.h>
#include <stdlib.h>

// Input int static array with n elements
void input (int *a, int &n)
{
	int x; // Input value
	n = 0;
	do 
	{
		scanf("%d", &x);
		if (x!=0) a[n++] = x;		
	}
	while (x != 0 && n<100);		
}

void output(int *a, int n)
{
	for (int i = 0; i<n; i++)
	{
		printf("%lf ", a[i]);
	}
}

int main()
{
	int a[100]; int n;
	printf("Input = "); input(a, n);
	printf("Elements in array : \n"); output(a,n);
	system("pause");
}
