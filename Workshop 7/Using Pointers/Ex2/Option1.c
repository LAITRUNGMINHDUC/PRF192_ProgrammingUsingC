void input(Employee *Data, int *n)
{
	Employee Temp;
	printf("Index: %d \n", *n);
	printf("Code: "); gets(Temp.Code);
	printf("Name: "); gets(Temp.Name);
	printf("Salary: "); scanf("%lf", &Temp.Salary);
	printf("Allowance: "); scanf("%lf", &Temp.Allowance);
	Data[*n] = Temp;
	*n = *n + 1;
}

void Option1(Employee *Data, int *n)
{
	fflush(stdin);
	printf("\nOption 1\n");
	input(Data, n);
	printf("\nAdd successfully \n");
	system("pause");
}
