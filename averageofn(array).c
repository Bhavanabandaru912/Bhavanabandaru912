#include<stdio.h>
main()
{int i,n,sum=0,a[50];
float average;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{sum=sum+a[i];
}
printf("sum is %d",sum);
average=sum/n;
printf("average is %f",average);
}
