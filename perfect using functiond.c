#include<stdio.h>
int perfectornot(int n);
int main()
{int n,s;
printf("enter any number");
scanf("%d",&n);
perfectornot(n);
if(perfectornot(n)==1)
printf("perfect number");
else
printf("not a perfect number");
return 0;
}
int perfectornot(int n)
{int i,sum=0;
for(i=1;i<n;i++)
{if(n%i==0)
sum=sum+i;
}
if(sum==n)
return 1;
else
return 0;
}
