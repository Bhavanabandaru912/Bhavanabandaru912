#include<stdio.h>
int swap(int a,int b);
int main()
{int a,b;
printf("enter a and b values");
scanf("%d%d",&a,&b);
printf("Before swapping:a is %d,b is %d\n",a,b);
swap(a,b);
printf("After swapping :a is %d,b is %d",a,b);
return 0;		
}
int swap(int a,int b)
{int t;
t=a;
a=b;
b=t;
return t;
}
