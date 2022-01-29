#include<stdio.h>
main()
{int n,m=1,i;
printf("enter any number");
scanf("%d",&n);
printf("enter i value");
scanf("%d",&i);
while(m<=i)
{
printf("%d*%d=%d\n",n,m,n*m);
m++;
}
}
