#include<stdio.h>
main()
{int i1=1,i2=2,n;
printf("enter any number");
scanf("%d",&n);
while(i1<n)
{printf("odd number\n");
printf("%d\n",i1);
i1=i1+2;
}
while(i2<n)
{printf("even number\n");
printf("%d\n",i2);
i2=i2+2;
}

}
