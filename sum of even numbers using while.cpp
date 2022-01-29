#include<stdio.h>
main()
{int n,i=2,sum=0;
printf("enter any number");
scanf("%d",&n);
while(i<=n)
{printf("%d\n",i);
sum=sum+i;
i=i+2;
}
printf("%d\n",sum);
}
