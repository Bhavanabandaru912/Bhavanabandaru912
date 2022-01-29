#include<stdio.h>
int sumofdigits(int n);
int main()
{int n,c;
printf("enter any number");
scanf("%d",&n);
c=sumofdigits(n);
printf("sum is %d",c);
return 0;
}
int sumofdigits(int n)
{int sum=0,d;
while(n>0)
{d=n%10;
sum=sum+d;
n=n/10;
}
return sum;
}
