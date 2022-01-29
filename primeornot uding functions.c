#include<stdio.h>
int primeornot(int n);
int main()
{int n,count=0;
printf("enter any number");
scanf("%d",&n);
primeornot(n);
if(primeornot(n)==0)
printf("prime number");
else
printf("not a prime ");
return 0;
}
int primeornot(int n)
{int i,m,count=0;
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
count=1;
break;
}
}
if(count==0)
return 0;
else
 return 1;
}
