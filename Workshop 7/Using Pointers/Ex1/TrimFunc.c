char* lTrim(char String[])
{
	int i = 0;
	while (String[i] == ' ') i++;
	if (i>0) strcpy(&String[0], &String[i]);
	return String;	
}

char* rTrim(char String[])
{
	int i = strlen(String) - 1;
	while (String[i] == ' ') i--;
	String[i+1] = '\0';	
	return String;
}

char* trimSpace(char String[])
{
	rTrim(String);
	lTrim(String);
	/* Trim Space all */		
	char *ptr = strstr(String, "  ");
	while (ptr != NULL)
	{
		strcpy (ptr, ptr+1);
		ptr = strstr(String, "  ");
	}	
	return String;
}
