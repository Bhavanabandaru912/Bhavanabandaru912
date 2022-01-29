#include<stdio.h>
int ducknum(int n);
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
ducknum(n);
if(ducknum(n)==0)
printf("ducknumber");
else
printf("not a duck number");
return 0;
}
int ducknum(int n)
{int d,count=0;
while(n>0)
{d=n%10;
if(d==0)
{
count=1;
break;
}
n=n/10;
}
if(count==1)
return 0;
else
return 1;
}
