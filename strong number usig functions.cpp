#include<stdio.h>
int strongnum(int n);
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
strongnum(n);
if(strongnum(n)==0)
printf("strong number");
else
printf("not a strong number");
return 0;
}
int strongnum(int n)
{int i,t,d,fact,sum=0;
t=n;
for(;n>0;n=n/10)
{d=n%10;
fact=1;
for(i=1;i<=d;i++)
{fact=fact*i;
}
sum=sum+fact;
}
if(sum==t)
return 0;
else
return 1;
}
