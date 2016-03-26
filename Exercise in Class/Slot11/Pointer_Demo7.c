#include <stdio.h>
#include <stdlib.h>

void Swap(char *pc1, char *pc2)
{
	char t = *pc1;
	*pc1 = *pc2;
	*pc2 = t;
}

int main()
{
	char *pc1, *pc2;
	
	//Dynamic Alloc for pc1, pc2
	pc1 = (char*) malloc(sizeof(char));
	pc2 = (char*) malloc(sizeof(char));
	
	//Input value into pc1, pc2
	printf("Char 1 = "); scanf("%s", pc1);
	printf("Char 2 = "); scanf("%s", pc2);

	/* Check value input or not
	printf("Char 1 = %s \n", pc1); 
	printf("Char 2 = %s \n", pc2); 
	*/
	
	printf("\n");
		printf("PC1 : Address : %u, Value : %c, Dynamic Alloc : %u \n", &pc1, *pc1, pc1);
		printf("PC2 : Address : %u, Value : %c, Dynamic Alloc : %u \n", &pc2, *pc2, pc2);
	printf("\n");
	
	if (*pc1 > *pc2) Swap(pc1, pc2);
	
	int i;
	for (i = *pc1; i <= *pc2; i++)
	{
		printf("%c,%4d,%4o%4X\n", i,i,i,i);
	}
}
