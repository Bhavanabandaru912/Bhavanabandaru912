#include<stdio.h>
int evennum(int a,int b);
int main()
{int a,b;
printf("enter a and b values(a<b)");
scanf("%d%d",&a,&b);
evennum(a,b);
printf("%d\n",evennum(a,b));
return 0;
}
int evennum(int a,int b)
{int i;
for(a=i;i<=b;i++)
{if(i%2==0)
return i;
}                 
}
