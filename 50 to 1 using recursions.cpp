#include<stdio.h>
int printnums(int n);
int main()
{int n=50;
printnums(n);

return 0;
}
int printnums(int n)
{if(n==0)
{
return 0;
}
else 
printf("%d\n",n);
return printnums(n-1);
}

