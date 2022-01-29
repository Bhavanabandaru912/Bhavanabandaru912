#include<stdio.h>
int lcm(int n,int m);
int main()
{int n,m;
printf("enter n and m values");
scanf("%d%d",&n,&m);
lcm(n,m);
printf("%d",lcm(n,m));
return 0;
}
int lcm(int n,int m)
{int max;
if(n>m)
max=n;
else
max=m;
while(max%n!=0||max%m!=0)
{max++;
}
return max;
}
