void SortDes()
{
	int i,j;
	struct MyData Temp;	

	for (i=1; i<N; i++)
	{
		for (j=N; j>i; j--)
		{
			if ((Employee[j].Salary + Employee[j].Allowance) > (Employee[j-1].Salary + Employee[j-1].Allowance))		
			{				
				Temp = Employee[j];
				Employee[j] = Employee[j-1];
				Employee[j-1] = Temp;				
			}
		}
	}
}

void Option4()
{
	int i; SortDes();
	printf("After Sort: \n");
	for (i=1; i<=N; i++)
	{
		printEmployee(i);
	}
}
