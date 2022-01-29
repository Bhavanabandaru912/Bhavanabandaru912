#include<stdio.h>
main()
{int n,count=0,i=2;
printf("enter any number");
scanf("%d",&n);
while(n>i)
{i++;
if(n%i==0)
count=1;
break;
}
if(count==0)
{printf("prime");
}
else
printf("not prime");
}
