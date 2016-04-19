char* rTrim(char s[])
{
	int i = 0;
	while (s[i] == ' ') i++;
	if (i>0) strcpy(&s[0], &s[i]);
	return s;
}

char* lTrim(char s[])
{
	int i = strlen(s) - 1;	
	while (s[i] == ' ') i--;
	if (j>0) s[i+1] = '\0';
	return s;
}

char* trimAll(char s[])
{
	rTrim(lTrim(s));
	char* ptr = strstr(s, "  ");
	while (ptr != NULL)
	{
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}