#include<stdio.h>
main()
{int i=1,base,exp,power=1;

printf("enter base and exp");
scanf("%d%d",&base,&exp);
while(i<=exp)
{power=power*base;
i++;
}
printf("%d",power);
}
