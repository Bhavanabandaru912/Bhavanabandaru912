#include<stdio.h>
main()
{ int n,d,t,rev;
scanf("%d",&n);
t=n;
for(;n>0;n=n/10)
{d=n%10;
rev=rev*10+d;
}
if(rev==t)
{printf("palindrome number");
}
else
printf("not a palindrome ");
}
