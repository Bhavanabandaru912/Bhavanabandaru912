#include<stdio.h>
main()
{int i=2,n,count=0;
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{if(n%i==0)

{
count=1;
break;}
}
if(count==0)
{printf("prime number");
}
else
printf("not a prime");

}
