int compare(int Value1, int Value2);
void sortDrinks(Drinks *MyDrinks, int n);
void Option4(Drinks *MyDrinks, int n);

void Option4(Drinks *MyDrinks, int n)
{
	int i=0;
	printf("\n Option 4 \n");
	printf("\n Sorted Array \n");
	sortDrinks(MyDrinks, n);
	for (i; i<n; i++) printTemplate(MyDrinks, i);
}

int compare(int Value1, int Value2)
{
	if (Value1 == Value2) return 0;
	if (Value1 > Value2) return 1;
	if (Value1 < Value2) return -1;
}

void sortDrinks(Drinks *MyDrinks, int n)
{
	int i,j;
	Drinks Temp;

	for (i=0; i<n-1; i++)
		for(j=n-1; j>i; j--)
		{
			int dVol = compare(MyDrinks[j].volume, MyDrinks[j-1].volume);
			int dPrice = compare(MyDrinks[j].price, MyDrinks[j-1].price);
			if (dVol<0 || (dVol==0 && dPrice<0))
			{
				Temp = MyDrinks[j];
				MyDrinks[j] = MyDrinks[j-1];
				MyDrinks[j-1] = Temp;							
			}
		}
}