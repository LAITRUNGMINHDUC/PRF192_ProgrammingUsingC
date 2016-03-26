void printVolume(int Value1, int Value2)
{
	int i;
	for (i = 0; i <= N; i++)
	{
		if (Database[i].volume >= Value1 && Database[i].volume <= Value2)
		{
			printData(i);
		}
	}
}

void Option3()
{
	int Value1, Value2;
	printf("Volume 1 = "); scanf("%d", &Value1);
	printf("Volume 2 = "); scanf("%d", &Value2);
	printVolume(Value1, Value2);
}
