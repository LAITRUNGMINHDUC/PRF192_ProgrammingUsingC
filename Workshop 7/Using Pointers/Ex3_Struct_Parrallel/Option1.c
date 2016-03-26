void addData(struct SoftDrink Data)
{
	Database[N] = Data;
	N = N + 1;
}

void inputData()
{
	struct SoftDrink Data;
	printf("=====================\n");
	printf("Add new soft drink \n");
	printf("Name : "); gets(Data.name); 
	printf("Make : "); gets(Data.make); 
	printf("Volume : "); scanf("%d", &Data.volume); 
	printf("Price : "); scanf("%d", &Data.price); 
	printf("Duration : "); scanf("%d", &Data.duration); 
	addData(Data); 
	getchar();
}


void Option1()
{
	int i;
	for (i=0; i<2; i++)
	{
		inputData();	
	}
}
