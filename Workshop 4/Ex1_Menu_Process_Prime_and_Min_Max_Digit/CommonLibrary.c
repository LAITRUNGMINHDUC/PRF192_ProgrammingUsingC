int input()
{
	int n;
	do
	{
		printf("Input N = "); scanf("%d%*c", &n);
	} while (n<0);
	return n;
}