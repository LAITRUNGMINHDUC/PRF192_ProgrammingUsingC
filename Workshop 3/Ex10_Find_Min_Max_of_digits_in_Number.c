#include <stdio.h>

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

	printf("Min = %d - Max = %d", min, max);
}

int main()
{
	int n;
	printf("N = ");scanf("%d", &n);
	printMinMaxremains(n);

	getch();
	return 0;
}
