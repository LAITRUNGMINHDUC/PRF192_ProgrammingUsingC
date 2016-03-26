/* file pointer_demo4.c */
#include <stdio.h>
int main()
{  int n2= 10;
   int n1= 6;
   int n0= 5;
   printf("n2=%d, n1=%d, n0=%d\n", n2, n1, n0);
   int* p = &n1; printf("%d, %u \n", *p, &p);
   *p=1; printf("%d, %u \n", *p, &p);
   p++; printf("%d, %u \n", *p, &p);
   *p=15; printf("%d, %u \n", *p, &p);
   p--;printf("%d, %u \n", *p, &p);
   p--;printf("%d, %u \n", *p, &p);
   *p=-3;
   //printf("%d, %u", p, p);
   getchar();
   return 0;
}

