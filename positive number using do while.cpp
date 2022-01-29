#include<stdio.h>
main()
{int n,count;
printf("enter any number");
scanf("%d",&n);
do
{printf("enter a number");
scanf("%d",&n);
count++;
}while(n>0);
printf("%d",count);
}
