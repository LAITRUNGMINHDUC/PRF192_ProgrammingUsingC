double calcDeposit(double deposit, double rate, int year)
{
	return deposit*pow(1+rate, year);
}

void askDeposit(double *pDeposit, double *pRate, double *pYear)
{
	double deposit, rate, year;
	do
	{
		printf("Deposit = "); scanf("%lf", &deposit);
	} while (deposit <=0.0);
	
	do
	{
		printf("Rate = "); scanf("%lf", &rate);
	} while (rate < 0.0 || rate > 1.0);
	
	do
	{
		printf("Year = "); scanf("%d", &year);
	} while (year<=0);
	
	*pDeposit = deposit; *pYear = year; *pRate = rate;	
}

void printResultDeposit(double Result)
{
	printf("Result = %lf", Result);
}

void Option2()
{
	double deposit, rate, result;
	int year;
	askDeposit(&deposit, &rate, &result);
	result = calcDeposit(deposit, rate, year);
	printResultDeposit(result);
}
