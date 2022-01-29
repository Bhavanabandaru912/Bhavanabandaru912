#include<stdio.h>
int power(int b,int e);
int main()
{int b,e;
printf("enter b and e values");
scanf("%d%d",&b,&e);
power(b,e);
printf("%d^%d=%d",b,e,power(b,e));
return 0;
}
int power(int b,int e)
{int  i=1,power=1;
for(i=1;i<=e;i++)
power=power*b;
return power;
}
