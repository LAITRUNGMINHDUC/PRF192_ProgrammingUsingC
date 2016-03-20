#include <stdio.h>
#include <stdlib.h>

int main()
{
	double Num1, Num2;
	char Operator;
	double result;
	
	printf("Type your statement : ");
	scanf("%lf%c%lf", &Num1, &Operator, &Num2);	
	
	switch(Operator)
	{
		case '+':
			result = Num1 + Num2;
			break;
		case '-':
			result = Num1 - Num2;
			break;
		case '*':
			result = Num1 * Num2;
			break;
		case '/':
			if (Num2 == 0)
			{
				printf("Divide by 0");			
			}			
			else
			{
				result = Num1 / Num2;					
			}
			break;
		default:
			printf ("Not support operator");
			exit(0);
	}
	
	printf("Result = %lf", result);
	getchar();
	return;
}
