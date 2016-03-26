int compare(int Value1, int Value2)
{
	if (Value1 == Value2) return 0;
	if (Value1 > Value2) return 1;
	if (Value1 < Value2) return -1;
}

void Sort()
{
	int i, j;
	struct SoftDrink Temp;
	
	for (i=0; i<N-1; i++)
		for (j=N-1; j>i; j--)
		{
			int dVol = compare(Database[j].volume, Database[j-1].volume);
			int dPrice = compare(Database[j].price, Database[j-1].price);
			if (dVol<0 || (dVol==0 && dPrice<0))
			{
				Temp = Database[j];
				Database[j] = Database[j-1];
				Database[j-1] = Temp;			
			}
		}
}

void printSort()
{
	int i;
	printf("\n === After Sort : === \n");
	for (i=0; i<N; i++)
	{
		printData(i);
	}
}

void Option4()
{
	Sort();
	printSort();
}
