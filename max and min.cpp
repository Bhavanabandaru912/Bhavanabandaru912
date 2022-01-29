#include<stdio.h>
main()
{int a,b;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
if(a>>b)
{printf("%d is max\n",a);
printf("%d is min",b);
}
else
{


printf("%d is max\n",b);
printf("%d is min",a);}
}
