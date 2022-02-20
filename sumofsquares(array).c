#include<stdio.h>
int main()
{int x[10],i,sum;
for(i=0;i<10;i++)
{scanf("%d",&x[i]);
}
sum=0;
for(i=0;i<10;i++)
sum=sum+x[i]*x[i];
printf("\n");
for(i=0;i<10;i++)
{printf("x[%d]=%d\n",i+1,x[i]);
}
printf("sum=%d",sum);
}
