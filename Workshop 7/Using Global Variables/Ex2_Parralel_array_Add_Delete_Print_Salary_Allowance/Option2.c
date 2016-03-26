//Find Employee by Name
void findName_printAll(char Data[20]);
void printEmployee(int position);

void findName_printAll(char Data[20])
{
	int i; int j = 0;
	int position[100];
	
	for (i = 0; i<=100; i++)
	{
		position[i] = 0;
	}
		
	printf("Your search result : \n ");
	for (i = 1; i<=N; i++)
	{
		if (strcmp(Employee[i].Name, Data) == 0)
		{			
			j = j + 1;
			position[j] = i;
		} 
	}
	
	i = 1;	
	if (position[1] == 0) printf("Not found");
	else
	{
		while (position[i] != 0)
		{
			printEmployee(position[i]);			
			i = i + 1;
		}
	}
}

void printEmployee(int position)
{
	printf("======================================= \n");
	printf("Code : %s \n", Employee[position].Code);	
	printf("Name : %s \n", Employee[position].Name);
	printf("Allowance : %lf \n", Employee[position].Allowance);
	printf("Salary : %lf \n", Employee[position].Salary);
	printf("======================================= \n");
}

void Option2()
{
	char Data[20];
	getchar();
	printf("=======================================\n");
	printf("Search Name = "); scanf("%[^\n]", &Data); getchar();
	findName_printAll(Data);
}

