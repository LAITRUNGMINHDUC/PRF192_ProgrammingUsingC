#include <stdio.h>
#include <stdlib.h>

int main()
{
	long income, n;
	int incomeTax;

	// Input Income - n dependents
	printf("Your income of this year : ");
	scanf("%u", &income);
	printf("Number of dependent : ");
	scanf("%u", &n);
	////////////////////////////

	// Calculate Taxable Income and Tax
	int pa = 9000000;	// pa : Personal pending amount
	int pd = 3600000;	// pd : Alimony for each his/her dependents
	int tf = 12*(pa + n*pd);	// tf : Tax Free 
	int ti;		// ti : Taxable Income

	if (income > tf)
	{
		ti = income - tf;
		if (ti <= 5000000)
		{
			incomeTax = (int) ti * 0.05;
		}
		else if ((ti > 5000000) && (ti <=10000000))
		{
			incomeTax = (int) ti * 0.1;
		}
		else if ((ti > 10000000) && (ti <=18000000))
		{
			incomeTax = (int) ti * 0.15;
		}
		else
		{
			incomeTax = (int) ti * 0.2;
		}
	}
	else
	{
		ti = 0;
		incomeTax = 0;
	}
	///////////////////////////	

	printf("Tax-free income : %d \n", tf);
	printf("Taxable income: %d \n", ti);
	printf("Income tax: %d\n", incomeTax);

	return 0;
}
