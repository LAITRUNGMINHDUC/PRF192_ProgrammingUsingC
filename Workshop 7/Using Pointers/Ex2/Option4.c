void sortDes(Employee *Data, int n)
{
	Employee Temp;
	int i,j;

	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
		{
			double Val1 = Data[j].Salary + Data[j].Allowance;
			double Val2 = Data[j-1].Salary + Data[j-1].Allowance;
			if (Val1 > Val2)
			{
				Temp = Data[j];
				Data[j] = Data[j-1];
				Data[j-1] = Temp;
			}
		}
}

void Option4(Employee *Data, int n)
{
	int i;
	printf("\nOption 4\n"); printf("After Sorted: \n");
	sortDes(Data, n);
	for (i=0; i<n; i++)
	{
		printTemplate(Data, i);
	}
	system("pause");
}
