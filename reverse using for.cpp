#include<stdio.h>
main()
{ int  n,d,t,rev;
printf("enter n value");
scanf("%d",&n);
t=n;
for(;n>0;n=n/10)
{d=n%10;
rev=rev*10+d;
}
printf("reverse of %d is %d",t,rev);
}
