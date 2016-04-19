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

char* nameStr(char String[])
{
	trimSpace(String);
	strlwr(String);
	int L = strlen(String);
	int i;
	for (i=0; i<L; i++) 
		if (i==0 || (i>0 && String[i-1] == ' ')) String[i] = toupper(String[i]);
	return String;
}
