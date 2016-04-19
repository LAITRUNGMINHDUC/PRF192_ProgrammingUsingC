int searchRangeVolume(int Val1, int Val2, Drinks *MyDrinks, int n);
void Option3(Drinks *MyDrinks, int n);

void Option3(Drinks *MyDrinks, int n)
{
	int Val1, Val2, isExist;
	fflush(stdin);
	printf("\n Option 3 \n");
	printf("Range of Volume: \n");
	printf("Value 1: "); scanf("%d", &Val1);
	printf("Value 2: "); scanf("%d", &Val2);
	printf("Result: \n");
	isExist = searchRangeVolume(Val1, Val2, MyDrinks, n);
	if (isExist == 0) printf("No result \n");
}

int searchRangeVolume(int Val1, int Val2, Drinks *MyDrinks, int n)
{
	int i=0; int isExist=0;
	for (i; i<n; i++)
	{
		if (MyDrinks[i].volume >= Val1 && MyDrinks[i].volume <= Val2)
		{
			printTemplate(MyDrinks, i);
			isExist = 1;
		}
	}
	return isExist;
}
