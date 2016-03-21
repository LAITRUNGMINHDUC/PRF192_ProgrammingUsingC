void SolveQuadratic(double a, double b, double c, double *pX1, double *pX2, int *pCheck)
{
	double delta = b*b - 4*a*c;
	if (delta >= 0)
	{
		*pX1 = (-b + sqrt(delta))/(2*a);
		*pX2 = (-b - sqrt(delta))/(2*a);
		*pCheck = 1;
	}
	else
	{
		*pCheck = 0;
	}
}

void AskPrintQuadratic()
{
	double X1; double X2;
	double a, b, c;
	int check;

	// printf("You choose: \n");
	printf("A = "); scanf("%lf", &a);
	printf("B = "); scanf("%lf", &b);
	printf("C = "); scanf("%lf", &c);

	SolveQuadratic(a, b, c, &X1, &X2, &check);
	if (check == 1)
	{
		if (X1 == X2)
		{
			printf("X = %lf",X1);
		}
		else
		{
			printf("X1 = %lf \n", X1);
			printf("X2 = %lf \n", X2);
		}
	}
	else
	{
		printf("No solution");
	}
}
