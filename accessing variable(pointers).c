#include<stdio.h>
main()
{int a=10,b;
int *p;
p=&a;
b=*p;
printf("%d is at address %u\n",a,&a);
printf("%d is at address %u\n",*&a,&a);
printf("%d is at address %u\n",a,*p);
printf("%d is at address %u\n",p,&p);
printf("%d is at address %u\n",*p,p);
printf("%d is at address %u\n",b,&b);
*p=25;
printf("now a value is %d",a);
}
