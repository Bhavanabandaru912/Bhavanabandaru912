#include<stdio.h>
main()
{int n,d,r=0,t;
printf("enter any number");
scanf("%d",&n);
t=n;
while(n>0)
{d=n%10;
r=r*10+d;
n=n/10;
}
if(t==r)
{printf("palindrome number");
}
else
printf("not a palindrome");
}
