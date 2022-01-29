#include<stdio.h>
main()
{int a,b,sum,sub,mul,div,rem,s;





printf("enter a and b\n");
scanf("%d%d",&a,&b);
printf("+sum,-sub,*mul,/div,%rem");
printf("enter choice");
scanf("%d",&s);
switch(s)
{case '+':sum=a+b;
printf("sum is %d",sum);
break;
case '-':sub=a-b;
printf("sub is %d",sub);
break;
case '*':mul=a*b;
printf("mul is %d",mul);
break;
case '/':div=a/b;
printf("div is %d",div);
break;
case '%':rem=a%b;
printf("rem is %d",rem);
break;
default:printf("enter corect choice");
break;

}

}
