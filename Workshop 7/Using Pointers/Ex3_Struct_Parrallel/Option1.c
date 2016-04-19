void inputData(Drinks *MyDrinks, int *n);
void Option1(Drinks *MyDrinks, int *n);

void Option1(Drinks *MyDrinks, int *n)
{
	fflush(stdin);
	inputData(MyDrinks, n);
}

void inputData(Drinks *MyDrinks, int *n)
{
	Drinks Data;
	printf("\nOption 1\n");
	printf("Add new soft drink \n");
	printf("Name : "); gets(Data.name); 
	printf("Make : "); gets(Data.make); 
	printf("Volume : "); scanf("%d", &Data.volume); 
	printf("Price : "); scanf("%d", &Data.price); 
	printf("Duration : "); scanf("%d", &Data.duration); 

	MyDrinks[*n] = Data;
	*n = *n + 1;
}
