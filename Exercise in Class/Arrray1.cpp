#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void inputArray(int a[], int &n)
{
	int i;
	do
	{
		printf("N = "); scanf("%d", &n);	
	}
	while (n < 1 || n > 50);
	
	for (i=0; i<n; i++)
	{
		printf("A[%d] = ",i); scanf("%d", &a[i]);	
	}	
}

void outputArray(int a[], int &n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("A[%d] = %d \n", i, a[i]);
	}
}

int main()
{
	int A[MAX], n;
	inputArray(A, n);
	outputArray(A, n);
	system("pause");
}
