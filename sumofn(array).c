#include<stdio.h>
int main()
{int i,n,sum=0;
int a[10];
float average;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{sum=sum+a[i];
}
printf("%d\n",sum);
average=sum/n;
printf("%f",average);
}
