#include <stdio.h>

int getRelPos(double x, double y, double r)
{
	double sqr_d = x*x + y*y;
	double sqr_r = r*r;

	if (sqr_d < sqr_r) return 1;
	else if (sqr_r == sqr_d) return 0;
	else return -1;
}

int main()
{
	double x,y,r;	

	printf("Type X,Y (Must in this type) = ");
	scanf("%lf,%lf,%lf", &x, &y);

	do
	{
		printf("Type R = "); scanf("%lf",&r);
	} while (r<0);

	switch (getRelPos(x,y,r))
	{
		case 1: printf("The point is IN the circle"); break;
		case 0: printf("The point is ON the circle"); break;
		case -1: printf("The point is OUT the circle"); break;
	}

	getchar();getchar();
	return 0;
}