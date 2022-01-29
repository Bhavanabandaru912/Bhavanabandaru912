#include<stdio.h>
main()
{int a,b,max;
printf("enter a and b values");
scanf("%d%d",&a,&b);
max=(a>b)?a:b;
while(1)
{if(max%a==0&&max%b==0)
{
printf("lcm of %d and %d is %d",a,b,max);
break;}
++max;
}
}
