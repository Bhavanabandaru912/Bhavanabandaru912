#include<stdio.h>
int isarmstrong(int n)
{int d;
int sum=0;
int t=n;
while(t>0)
{d=t%10;
sum=sum+d*d*d;
t=t/10;
}
if(sum==n)
return 0;
else
return 1;
}

int main()
{ int n;
printf("enter any number");
scanf("%d",&n);
if(isarmstrong(n)==0)
printf("armstrong number");
else
printf("not an armstrong");
return 0;
}


