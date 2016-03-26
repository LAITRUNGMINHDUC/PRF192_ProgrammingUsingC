#include <stdio.h>
#include <stdlib.h> //For system("pause")

/*
	Pass parameter by "Alias" only accept by variable
	Never pass constant to this kind of function
	
	Pass parameter by "Value" accept constant, value,...
*/
int swap(int&x, int&y)
{
	/*
		X is alias of A
		Y is alias of B
		
		Therefore,
			Memory address of X is memory address of A
			Memory address of Y is memory address of B
			There is no new X, Y
			Just "another name" of A, B
	*/
	printf("Address x : %u, Value : %d \n", &x, x);
	printf("Address y : %u, Value : %d \n", &y, y);
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 10, b = 5;
	//int n = 10;
	//int &m = n; // Create an alias for variable	
	
	//printf("Address n : %u, Value : %d \n", &n, n);
	//printf("Address m : %u, Value : %d \n", &m, m);
	
	printf("Address a : %u, Value : %d \n", &a, a);
	printf("Address b : %u, Value : %d \n", &b, b);
	swap(a, b);
	printf("Address a : %u, Value : %d \n", &a, a);
	printf("Address b : %u, Value : %d \n", &b, b);
	
	//double *p1 = (double*) malloc (sizeof(double));
	double *p1 ;
	p1 = (double*) malloc (sizeof(double));
	*p1 = 12.345;
	printf("Memory Alloc P1 : %u, Value : %lf \n", p1, *p1);
	free(p1);
	
	double *p2 = new double;
	*p2 = 9.09;
	printf("Memory Alloc P2 : %u, Value : %lf \n", p2, *p2);
	delete(p2);
	
	int s = 0;
	for (int i = 1; i<=a; i++) s+=i; 
	// In C++, we can declare a variable inside For
	printf("Sum 1..%d = %d \n", a, s);
	
	system("pause");
	return 0;
}
