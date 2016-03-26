#include <stdio.h>

int main()
{
	int n=7, m=6; printf("N = %d, M = %d \n", n, m);
	int *pn = &n; printf("Address N (from *pn) = %d \n", pn);
	int *pm = &m; printf("Address M (from *pm) = %d \n", pm);
	
	char c1 = 'A', c2 = 'F';
	
	*pn = *pm + 2*m - 3*n;
	*pm = *pm - *pn;
	printf("C1 = %d, C2 = %d \n", c1, c2);
	
	getchar();
}
