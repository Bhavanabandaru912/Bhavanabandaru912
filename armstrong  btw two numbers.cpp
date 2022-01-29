#include<stdio.h>
main()
{int n1,n2,a,r,sum;
printf("enter any number");
scanf("%d",&n1);
printf("enter any number");
scanf("%d",&n2);
for(n1=n1;n1<=n2;n1++)
{sum=0;
a=n1;
while(a>0)
{r=a%10;
sum=sum+r*r*r;
a=a/10;
}
if(sum==n1)
{printf("arm is %d",n1);
}
}
}
