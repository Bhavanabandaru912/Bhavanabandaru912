#include<stdio.h>
int msd(int n);
int main()
{int n,lsd,sum=0,c1,c2;
printf("enter any number");
scanf("%d",&n);
lsd=n%10;
c1=lsd*lsd*lsd;
msd(n);
sum=c1+msd(n);
printf("%d",sum);
return 0;
}
int msd(int n)
{while(n>=10)
{n=n/10;
}
return n*n*n;
}
