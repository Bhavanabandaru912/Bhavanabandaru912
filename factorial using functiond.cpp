#include<stdio.h>
int factorial(int n);
int main()
{int n,f;
printf("enter any number");
scanf("%d",&n);
f=factorial(n);
printf("factorial of %d is %d",n,f)                                                        ;
return 0;
}
int factorial(int n)
{int i,fact=1;
	for(i=1;i<=n;i++)
	{fact=fact*i;
	}
	return fact;
}
