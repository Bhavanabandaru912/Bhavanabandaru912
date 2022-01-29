#include<stdio.h>
main()
{int a;
printf("enter a value");
scanf("%d",&a);
switch(a%2)
{
	case 0:printf("even number");
	break;
	case 1:printf("odd number");
	break;
}
}
