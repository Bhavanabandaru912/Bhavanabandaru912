#include<stdio.h>
main()
{int n,sum,d,t;
printf("enter any number");
scanf("%d",&n);
t=n;
for(sum=0;n>0;n=n/10)
{d=n%10;
sum=sum+d*d*d;
}
if(t==sum)
{printf("armstrong number");
}
else
printf("not an armstrong number");

}

