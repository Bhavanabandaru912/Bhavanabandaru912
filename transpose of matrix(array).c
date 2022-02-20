#include<stdio.h>
int main()
{int m[3][3],t[3][3],i,j;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{
printf("m[%d][%d]=",i,j);
scanf("%d",&m[i][j]);
}
}
printf("entered matrix is\n");
for(i=0;i<3;i++)
{printf("\n");
for(j=0;j<3;j++)
{printf("%d\t",m[i][j]);
}
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
   t[i][j]=m[j][i];
}
printf("\ntransposed matrix is \n");
for(i=0;i<3;i++)
{printf("\n");
for(j=0;j<3;j++)
{printf("%d\t",t[i][j]);
}
}
}
