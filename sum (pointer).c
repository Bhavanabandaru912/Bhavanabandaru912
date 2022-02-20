#include<stdio.h>
main()
{int i,a[5],sum=0;
int *ptr;
for(i=0;i<5;i++)
{scanf("%d",&a[i]);
}
ptr=a;
sum=0;
for(i=0;i<5;i++)
{
sum=sum+ *ptr;
ptr++;	
}
printf("%d",sum);
}
