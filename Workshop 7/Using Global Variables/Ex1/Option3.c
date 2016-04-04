void Option3()
{
	askName(Name);
	int position = findName(Name);
	if (position == -1)
	{
		printf("Search Failed\n");
	}
	else
	{
		printf("The position of Student in list : %d \n", position);
	}
}
