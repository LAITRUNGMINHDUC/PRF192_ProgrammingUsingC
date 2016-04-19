void removePos(Employee *Data, char *Code, int *n)
{
	int i, j; 
	for (i=0; i<*n; i++)
	{
		int cmp = strcmp(Data[i].Code, Code);
		if (cmp == 0) 
		{
			*n = *n - 1;
			for (j=i; j<*n; j++)
			{
				Data[j] = Data[j+1];
			}
			printf("Employee at index %d is deleted \n", i);
			break;
		}
	}
	printf("\nNo code to delete\n");
}

void Option3(Employee *Data, int *n)
{
	char Code[8];
	printf("\nOption 3\n"); fflush(stdin);
	printf("Code to remove: "); gets(Code);
	removePos(Data, Code, n);
	system("pause");
}
