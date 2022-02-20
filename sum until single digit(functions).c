#include<stdio.h>
int sume(int sum);
int main()
{int n,sum=0,d;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{d=n%10;
sum=sum+d;
n=n/10;
}
sume(sum);
printf("%d",sume(sum));
return 0;
}
int sume(int sum)
{int r,sum1;
while(sum>0)
{r=sum%10;
sum1=sum1+r;
sum=sum/10;
}
return sum1;
}
