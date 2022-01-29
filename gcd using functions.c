#include<stdio.h>
int gcd(int n,int m);
int main()
{int n,m;
printf("enter n and m values");
scanf("%d%d",&n,&m);
gcd(n,m);
printf("%d",gcd(n,m));
return 0;
}
int gcd(int n,int m)
{int i,g;
for(i=1;i<=n&&i<=m;++i)
{if(n%i==0&&m%i==0)
g=i;
}
return g;
}
