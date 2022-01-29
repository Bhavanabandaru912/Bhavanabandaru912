#include<stdio.h>
int evenorodd(int n);
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
evenorodd(n);
if(evenorodd(n)==1)
printf("even number");
else
printf("odd");
return 0;
}
int evenorodd(int n)
{int e,o;
if(n%2==0)
return 1;
else
return 0;
}
