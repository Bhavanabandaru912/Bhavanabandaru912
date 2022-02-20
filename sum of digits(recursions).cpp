#include<stdio.h>
int sumofdigits(int n);
int main()
{int n,s;
printf("enter any number");
scanf("%d",&n);
s=sumofdigits(n);
printf("sum of digits of %d is %d",n,s);
return 0;
}
int sumofdigits(int n)
{int d;
static int sum=0;
if(n!=0)
{d=n%10;
sum=sum+d;
return d+sumofdigits(n/10);
}
else
return 0;
}
