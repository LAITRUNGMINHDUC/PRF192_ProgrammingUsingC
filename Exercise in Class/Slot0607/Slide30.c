#include <stdio.h>

int main()
{
	char c='0';

	int number_letters, number_digits, number_others;
	number_letters = number_digits = number_others = 0;
	const int ENTER = 10;

	printf("Enter a string : ");

	while (c!=ENTER)
	{
		c = getchar();
		if (c >= '0' && c<= '9')
		{
			number_digits = number_digits + 1;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A') && (c <= 'Z'))
		{
			number_letters = number_letters + 1;
		}
		else
		{
			number_others = number_others + 1;
		}
	}

	printf("number_letters = %d \n", number_letters);
	printf("number_digits = %d \n", number_digits);
	printf("number_others (exclude ENTER char) = %d \n", number_others - 1);

	getch();
	return 0;
}
