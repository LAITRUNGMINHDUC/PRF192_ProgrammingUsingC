#include <stdio.h>

int main()
{
	int a,b;
	float c,d;
	double e,f;

	printf("2 Integers : ");scanf("%d %d", &a, &b);
	printf("2 Float : ");scanf("%f %f", &c, &d);
	printf("2 Double : ");scanf("%lf %lf", &e, &f);
	printf("--------------------------------------- \n");

	printf("Value Int 1 : %d, address : %u \n", a, &a);
	printf("Value Int 2 : %d, address : %u \n", b, &b);
	printf("Value Float 1 : %f, address : %u \n", c, &c);
	printf("Value Float 2 : %f, address : %u \n", d, &d);
	printf("Value Double 1 : %lf, address : %u \n", e, &e);
	printf("Value Double 2 : %lf, address : %u \n", f, &f);

	getchar();
	getchar();

	return 0;
}
