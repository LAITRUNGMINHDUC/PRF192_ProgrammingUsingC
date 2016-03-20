#include <stdio.h> // For getchar()
#include <stdlib.h>
#include <ctype.h> // For toupper()

int main()
{
	char ch;
	int nVowels = 0; int nConsonants = 0; int nOthers = 0;
	printf("Type a String : ");	
	do
	{
		ch = getchar();
		ch = toupper(ch);
				
		if ((ch >= 'A') && (ch <='Z'))
		{
			switch (ch)
			{
				case 'A':
				case 'E':
				case 'U':
				case 'O':
				case 'I':
					nVowels = nVowels + 1;
					break;
				default:
					nConsonants = nConsonants + 1;
			}
		}
		else
		{
			nOthers = nOthers + 1;
			//Always = 1 because We always have \n to finish
		}
	} while (ch != '\n');
	
	printf("\n");
	printf("Vowels times : %d \n", nVowels);
	printf("Consonants times : %d \n", nConsonants);
	printf("Others times : %d \n", nOthers);

	getchar();
	return 0;
}
