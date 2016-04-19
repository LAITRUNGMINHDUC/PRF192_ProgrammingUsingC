int searchByMake(char *Make, Drinks *MyDrinks, int n)
{
	int i = 0; int isExist = 0;
	for (i; i<n; i++)
	{
		if (strcmp(MyDrinks[i].make, Make) == 0) 
		{
			printTemplate(MyDrinks, i);
			isExist = 1;
		}
	}
	return isExist;
}

void Option2(Drinks *MyDrinks, int n)
{
	char Make[20]; int isExist;
	fflush(stdin);
	printf("\n Option 2 \n");
	printf("Search by Make = "); gets(Make); printf("\n");
	printf("Result : \n");
	isExist = searchByMake(Make, MyDrinks, n);
	if (isExist==0) printf("No result \n");
}
