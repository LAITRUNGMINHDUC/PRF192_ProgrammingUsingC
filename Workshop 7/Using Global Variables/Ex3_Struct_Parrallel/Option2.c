void findMake_n_Print(char Keyword[20])
{
	int i;
	for (i = 0; i <= N; i++)
	{
		if (strcmp(Database[i].make, Keyword) == 0)
		{
			printData(i);
		}
	}
}

void Option2()
{
	char Make[20];
	printf("Search Make = "); gets(Make); printf("\n");
	printf("Result : \n");
	findMake_n_Print(Make);
}
