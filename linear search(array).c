#include<stdio.h>
int main()
{int i,sum=0,flag=1,num;
int a[10]={11,34,52,67,8};
printf("enter the number");
scanf("%d",&num);
for(i=1;i<10;i++)
{if(a[i]==num)
{

printf("%d is at the position %d",num,i);
flag=0;
break;
}
}
if(flag==1)
printf("Number not found");
}
