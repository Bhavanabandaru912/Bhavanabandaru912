#include<stdio.h>
main()
{int a,b,i,gcd;
scanf("%d%d",&a,&b); 
for(i=2;a>=i&&b>=i;i++)
{
	if(a%i==0&&b%i==0)
	gcd=i;
}
printf("gcd of %d and %d is %d\n",a,b,gcd);
}
