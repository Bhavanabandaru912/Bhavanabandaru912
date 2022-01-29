#include<stdio.h>
main()
{int i=1,n,m;
printf("enter any number");
scanf("%d",&n);
printf("enter m value");
scanf("%d",&m);
while(i<=m)
{printf("%d*%d is %d\n",n,i,n*i);
i++;
}
}
