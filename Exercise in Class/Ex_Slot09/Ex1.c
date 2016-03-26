#include <stdio.h>
#include <stdlib.h>

/* 
Viet chuong trinh nhap n ==> Xuat Fibonanci thu n
Viet chuong trinh nhap x ==> x co phai Fibonanci khong?
*/

int MakeFibo(int n)
{
	int t1=1, t2=1, f=1, i;
	for (i = 3; i <= n; i++)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;	
}

int CheckFibo(int x)
{
	int t1=1, t2=1, f=1, i;
	while (f<x)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f==x;	
}

int main()
{
	int x, n;
	
	printf("N = "); scanf("%d", &n);
	printf("X = "); scanf("%d", &x);
	
	printf("Fibo (n) = %d \n", MakeFibo(n));
	CheckFibo(x) ? printf("%d is Fibo \n", x): printf("%d is not Fibo \n", x);
	
	system("pause");
	return 0;
}
