#include<stdio.h>
int fact(int n);
int main()
{int n,npr,r;
printf("enter n and r values");
scanf("%d%d",&n,&r);
npr=fact(n)/fact(n-r);
printf("%d",npr);
return 0;
}

int fact(int n)
{int i=1,f=1;
for(;i<=n;i++)
f=f*i;
return f;
}
