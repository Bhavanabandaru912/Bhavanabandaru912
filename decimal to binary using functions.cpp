#include<stdio.h>
long tobinary(int n);
int main()
{int n;
printf("enter any number");
scanf("%d",&n);
tobinary(n);
printf("%ld",tobinary(n));
return 0;
}
long tobinary(int n)
{long binary=0,d,f=1;
while(n!=0)
{d=n%2;
binary=binary+d*f;
f=f*10;
n=n/2;
}
return binary;
}
