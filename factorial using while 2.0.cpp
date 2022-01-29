#include<stdio.h>
main()
{int i=1,m,n,fact=1;
printf("enter any number");
scanf("%d",&m);
while(n>0)
{n=m*(m-1);
fact=fact*n;
m=m-2;
}
}
