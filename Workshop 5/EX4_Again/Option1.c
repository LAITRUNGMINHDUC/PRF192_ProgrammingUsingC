void askABC(double *a, double *b, double *c)
{
	double x,y,z;
	printf("A = ");scanf("%lf", &x);
	printf("B = ");scanf("%lf", &y);
	printf("C = ");scanf("%lf", &z);		
	*a = x; *b = y; *c = z;	
}


void solveABC(double a, double b, double c, double *x1, double *x2, int *check)
{
	double delta;
	delta = b*b - 4*a*c;
	if (delta >= 0)
	{
		*x1 = (-b + sqrt(delta))/(2*a);
		*x2 = (-b - sqrt(delta))/(2*a);
	}
	else
	{
		*check = 0;
	}
}

void printResultABC(int check, double x1, double x2)
{	
	if (check == 1)
	{
		if (x1 == x2)
		{
			printf("X = %lf \n", x1);
		}
		else
		{
			printf("X1 = %lf \n", x1);
			printf("X2 = %lf \n", x2);
		}
	}
	else
	{
		printf("No solution \n");
	}
}
void Option1()
{
	double A, B, C, X1, X2;
	int check = 1;
	askABC(&A, &B, &C);
	if (A == 0)
	{
		printf("It's not quadratic equation \n");
	}
	else
	{
		solveABC(A, B, C, &X1, &X2, &check);	
		printResultABC(check, X1, X2);		
	}
}
