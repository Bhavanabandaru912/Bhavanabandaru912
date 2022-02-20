#include<stdio.h>
main()
{int a[5],count,sum,i;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("\nGiven array is \n");
for(i=0;i<5;i++)
printf("%d\t",a[i]);
count=0;
sum=0;
for(i=0;i<5;i++)
{if(a[i]%2!=0)
{
count=count+1;
sum=sum+a[i];
}
}
printf("no of odd numbers = %d\n",count);
printf("sum of odd numbers = %d",sum);
}
