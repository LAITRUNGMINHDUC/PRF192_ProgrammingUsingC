// Input dynamic array, output the Maximum, output the array
#include <stdio.h>
#include <stdlib.h>

// Input double dynamic array with n elements
void input (double *&a, int &n)
{
	// Input n
	do
	{
		printf("How many elements (N) = "); scanf("%d", &n);
	}
	while (n<1);
	
	// Memory alloc
	a = new double[n];
	
	// Input elements
	printf("Type %d elements: \n", n);
	for (int i = 0; i<n; i++)
	{
		scanf("%lf", &a[i]);
	}
}

// Get the max value of array
double getMax(double *a, int n)
{
	double result = a[0];
	for (int i = 1; i<n; i++)
	{
		if (result < a[i]) result = a[i];
	}
	return result;
}

void output(double *a, int n)
{
	for (int i = 0; i<n; i++)
	{
		printf("%lf ", a[i]);
	}
}

int main()
{
	double *a; int n;	
	double maxVal;
	
	input(a, n); maxVal = getMax(a, n);
	printf("Max Value = %lf \n", maxVal);
	printf("Elements in array : \n"); output(a,n);
	
	// Release memory
	delete []a;
	system("pause");
}
