void findByName(Employee *Data, char *Name, int n)
{
	int i=0; int isExist = 0;
	for (i; i<n; i++)
	{
		int cmp = strcmp(Data[i].Name, Name);
		if (cmp == 0) 
		{
			printTemplate(Data, i);	
			isExist = 1;
		}
	}
	if (isExist == 0) printf("\nCan not find that name\n");
}

void Option2(Employee *Data, int n)
{
	char Name[20]; fflush(stdin);
	printf("\nOption 2\n");
	printf("Name: "); gets(Name);
	findByName(Data, Name, n);
	system("pause");
}
