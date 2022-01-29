#include<stdio.h>
void printperfect(int min,int max);
int isperfect(int n);
int main()
{int min,max;
printf("enter min and max values");
scanf("%d%d",&min,&max);
printperfect(min,max);

return 0;
}
int isperfect(int n)
{int i,sum=0;
for(i=1;i<n;i++)
if(n%i==0)
{sum=sum+i;
}
if(sum==n)
return 0;
else
return 1;
}
void printperfect(int min,int max)
{while(min<=max)
{if(isperfect(min))
printf("%d",min);
}
min++;
}
