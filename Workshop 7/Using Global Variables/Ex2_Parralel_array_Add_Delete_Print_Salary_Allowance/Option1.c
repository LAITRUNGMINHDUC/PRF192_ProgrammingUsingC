//Add Employee
void addEmployee(struct MyData Data);
void inputEmployee();
void inputMoreEmployee(int quantity);

void addEmployee(struct MyData Data)
{
	N = N + 1;
	Employee[N] = Data;
}

void inputEmployee()
{
	struct MyData inputData; getchar();
	printf("Code : "); scanf("%[^\n]", inputData.Code); getchar();
	printf("Name : "); scanf("%[^\n]", inputData.Name); getchar();
	printf("Salary : "); scanf("%lf", &inputData.Salary);
	printf("Allowance : "); scanf("%lf", &inputData.Allowance);
	addEmployee(inputData);		
}

void inputMoreEmployee(int quantity)
{
	int count = 0;
	do
	{
		count = count + 1;
		quantity = quantity - 1;		
		printf("Employee %d : \n", count);
		inputEmployee();
		printf("-------------------------- \n");
	}
	while (quantity > 0);
}

void Option1()
{
	int choose, quantity;
	printf("1 - Multi Input ; 2 - Single Input = "); scanf("%d", &choose);
	if (choose == 1) 
	{
		printf("Number of employees = "); scanf("%d", &quantity); getchar();
		inputMoreEmployee(quantity);
	}
	if (choose == 2)
	{
		inputEmployee();
	}
}

void Template()
{
	N = 3;
	strcpy(Employee[1].Code, "11");
	strcpy(Employee[1].Name, "11");	
	Employee[1].Allowance = 10.0;
	Employee[1].Salary = 10.0;
	
	strcpy(Employee[2].Code, "11");
	strcpy(Employee[2].Name, "11");	
	Employee[2].Allowance = 2.0;
	Employee[2].Salary = 2.0;
	
	strcpy(Employee[3].Code, "11");
	strcpy(Employee[3].Name, "11");	
	Employee[3].Allowance = 1.0;
	Employee[3].Salary = 1.0;
	
	printEmployee(1);
	printEmployee(2);
	printEmployee(3);
}
