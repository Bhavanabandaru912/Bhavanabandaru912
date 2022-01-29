#include<stdio.h>
main()
{int n,sum=0,d,t;
printf("enter any number");
scanf("%d",&n);
t=n;
while(n>0)
{d=n%10;
sum=sum+d*d*d;
n=n/10;}
if(t==sum)
{printf("armstrong number");
}
else
printf("not an armstrong number");

}

