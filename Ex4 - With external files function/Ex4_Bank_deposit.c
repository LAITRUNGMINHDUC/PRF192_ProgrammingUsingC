double Calculate(double deposit, double rate, int year)
{
	return deposit*pow(1+rate, year);
}

void AskPrintDeposit()
{
	double deposit, rate, result;
	int year;

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

	result = Calculate(deposit, rate, year);
	printf("Result = %lf", result);
}
