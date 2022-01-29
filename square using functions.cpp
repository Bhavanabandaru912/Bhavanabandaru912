#include<stdio.h>
int square(int n);
int main()
{int n;
printf("enter n value");
scanf("%d",&n);
square(n);
printf("%d square is %d",n,square(n));
return 0;
}
int square(int n)
{int s;
s=n*n;
return s;
}
