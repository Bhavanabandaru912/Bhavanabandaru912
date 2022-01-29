#include<stdio.h>
int tobinary(int n);
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
tobinary(n);
printf("%d",tobinary(n));
return 0;
}
int tobinary(int n)
{
if(n==0)
return 0;
else
return (n% 2 + 10* tobinary(n / 2));
}
