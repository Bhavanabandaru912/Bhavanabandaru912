#include<stdio.h>
int main()
{int i,j,row,column,a[10][10],sum=0;
printf("enter no of rows and columns");
scanf("%d %d",&row,&column);
for(i=0;i<row;i++)
{for(j=0;j<column;j++)
{scanf("%d\t",&a[i][j]);
}
}
printf("\nentered matrix is:\n");
for(i=0;i<row;i++)
{printf("\n");
for(j=0;j<column;j++)
{printf("%d\t",a[i][j]);
}
}
sum=0;
for(i=0;i<row;i++)
{sum=sum+a[i][i];
}
printf("%d",sum);
}
