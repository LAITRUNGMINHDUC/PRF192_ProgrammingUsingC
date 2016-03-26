int fibonanci(int n)
{
	int t1=1, t2=1, f=1, i;
	for (i = 3; i <= n; i++)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;	
}

void printFibonanciSequence(int n)
{
	int i;
	for (i = 1; i<=n; i++)
	{
		printf("%d ", fibonanci(n));
	}	
}

int input()
{
	int n;
	do
	{
		printf("Input N = "); scanf("%d%*c", &n);
	} while (n<0);
	return n;
}
void Option1()
{
	int n = input();
	printFibonanciSequence(n);
	printf("\n");
}