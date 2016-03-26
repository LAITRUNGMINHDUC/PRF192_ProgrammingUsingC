int isPrime(int n)
{
	int i;	
	if (n==1 || n==2 || n==3) return 1;

	for (i=2; i<=n/2; i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}

void inputNforPrime()
{
	int n;
	n = input();
	isPrime(n) ? printf("%d is Prime \n", n):printf("%d isn't Prime \n", n);
}

void Option1()
{
	printf("===============RESULT=============== \n");
	inputNforPrime();
	printf("\n");
}