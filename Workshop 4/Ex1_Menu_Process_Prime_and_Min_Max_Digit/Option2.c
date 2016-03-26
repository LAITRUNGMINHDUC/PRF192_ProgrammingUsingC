void printMinMaxremains(int n)
{
	int min, max, remain, count;
	count = 0;
	
	do
	{
		count = count + 1;
		remain = n%10;
		n = n/10;		
		if (count == 1)
		{
			min = max = remain;				
		}				
		if (min >= remain)
		{
			min = remain;
		}		
		if (max <= remain)
		{
			max = remain;
		}		
	} while (n > 0);

	printf("Min = %d - Max = %d \n", min, max);
}

void inputNforMinMaxdigit()
{
	int n;
	n = input();
	printMinMaxremains(n);
}

void Option2()
{
	printf("===============RESULT=============== \n");
	inputNforMinMaxdigit();
	printf("\n");
}