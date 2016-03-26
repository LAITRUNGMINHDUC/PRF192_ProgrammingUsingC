int findCode_and_delete(char Code[8]);
void deleteEmployee(int position);

int findCode_and_Delete(char Code[8])
{
	int i; int j = 0;	
	for (i=0; i<=N; i++)
	{
		if (strcmp(Employee[i].Code, Code)==0)
		{
			deleteEmployee(i);
			return 1;
		}
	}
	return 0;
}

void deleteEmployee(int position)
{
	int i;
	N = N-1;
	for (i=position-1; i<N; i++)
	{
		Employee[i] = Employee[i+1];
	}
}

void Option3()
{
	int i;
	char Code[8]; getchar();
	printf("Delete Employee by Code = "); scanf("%[^\n]", &Code);
	findCode_and_Delete(Code) ? printf("Delete successfully") : printf("Delete Failed");
}
