void SortAsc()
{
	int i,j;
	char Temp[20];
	for (i=0; i<N-1; i++)
	{
		for (j=N-1; j>i; j--)
		{
			if (strcmp(Student[j], Student[j-1]) < 0)
			{
				strcpy(Temp, Student[j]);
				strcpy(Student[j], Student[j-1]);
				strcpy(Student[j-1], Temp);
			}
		}
	}
}

void Option4()
{
	int i; SortAsc();
	printf("After Sort: \n");
	for (i=0; i<=N; i++)
	{
		printf("%s \n", Student[i]);
	}
}
