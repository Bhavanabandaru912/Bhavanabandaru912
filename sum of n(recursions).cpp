#include<stdio.h>
int sumofn(int n);
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
sumofn(n);
printf("%d",sumofn(n));
return 0;
}
int sumofn(int n)
{static int sum=0;
if(n!=0)
{
return n+sumofn(n-1);
}
else
{
return n;
}
}
