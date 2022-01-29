#include<stdio.h>
main()
{int n1,n2,num,i,count;
printf("enter n1 and n2");
scanf("%d%d",&n1,&n2);
for(n1=num;n1<=n2;n1++)
{
	num=n1;
	count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{count++;
		}
	}
	if(count==2)
	{printf("prime number is %d\n",n1);
	}
}
}
