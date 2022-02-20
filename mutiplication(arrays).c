#include<stdio.h>
int main()
{int a[10][10],b[10][10],c[10][10],i,j,k,n,m;
printf("enter size of a matrix\n");
scanf("%d",&n);
m=n;
printf("enter elements in row wise fashion\n");
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{scanf("%d",&b[i][j]);
}
}
printf("\nEntered matrices are\n ");
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<m;j++)
{printf("%d\t",a[i][j]);
}
}
printf("\n");
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<m;j++)
{printf("%d\t",b[i][j]);
}
}
printf("\nproduct of matrices are\n");
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<m;j++)
{printf("%d\t",c[i][j]);
}
}
}
