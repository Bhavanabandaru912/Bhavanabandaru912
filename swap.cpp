#include<stdio.h>
main()
{
	int a,b,z;
	printf("enter a,b values:");
	scanf("%d%d",&a,&b);
	printf("before swaping:a is %d,b is %d",a,b);
	z=a;
	a=b;
	b=z;
	printf("after swapping:a is %d,b is %d",a,b);
	
}
