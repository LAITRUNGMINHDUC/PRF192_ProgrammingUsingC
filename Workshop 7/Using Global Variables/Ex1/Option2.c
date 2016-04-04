void delName(int position)
{
	int i;
	N = N-1;
	for (i=position-1; i<=N; i++)
	{
		strcpy(Student[i], Student[i+1]);		 
	}
}

int findName(char *Name)
{
	int i;
	for (i = 0; i <= N; i++)
	{
		if (strcmp(Student[i], Name) == 0)
		{
			return i;
		}
	}
	return -1;
}

int processDelName(char *Name)
{
	int position = findName(Name);
	if (position == -1) return 0;
	else 
	{
		delName(position);
		return 1;
	}
}
void Option2()
{
	askName(Name);
	if (processDelName(Name)) printf("Delete successful \n");
		else printf("No student with that name \n");	
}
