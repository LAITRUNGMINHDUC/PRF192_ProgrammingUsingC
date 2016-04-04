void addName(char *Name)
{	
	strcpy(Student[N], Name);
	N = N + 1;
}

int existName(char *Name)
{
	int i;
	for (i = 0; i <= N; i++)
	{
		if (strcmp(Student[i], Name) == 0)
		{
			printf("Duplicate name\n");
			return 1;
		}	
	}
	return 0;
}

void Option1()
{
	do
	{
		askName(Name);
	} while (existName(Name) == 1);
	addName(Name);
}
