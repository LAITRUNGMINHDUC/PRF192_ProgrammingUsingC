#include <stdio.h>

double makeDouble(int integral_part, int fraction_part)
{
	double d_f = fraction_part;
	while (d_f >= 1)
	{
		d_f = d_f / 10;
	}	
	if (integral_part < 0)
	{
		return integral_part - d_f;
	}	
	else
	{
		return integral_part + d_f;
	}
}

int main()
{
	int a, b;
	double value;

	printf("Integral Part = "); scanf("%d", &a);

	do
		{
			printf("Fraction Part = "); scanf("%d", &b);			
		} while (b<0);	

	value = makeDouble(a, b);
	printf("Result = %lf", value);

	getchar(); getchar();
	return 0;
}
