#include<stdio.h>
main()
{int n,d,f=1;
long binary=0;
printf("enter any number");
scanf("%d",&n);
for(;n!=0;n=n/2)
{d=n%2;
binary=binary+d*f;
f=f*10;
}
printf("binary of %d is %ld",n,binary);
}
