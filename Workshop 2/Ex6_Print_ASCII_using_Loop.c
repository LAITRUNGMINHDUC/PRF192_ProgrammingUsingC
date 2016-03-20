#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	for (i; i < 266; i++)
		{
			printf("%c : %d, %o, %X\n", i, i, i, i);
			if ((i != 0) && (i%20==0))
			{
				getchar();
			}
		}	
	getchar(); 
	return 0;
}
