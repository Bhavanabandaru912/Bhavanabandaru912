#include<stdio.h>
int main()
{int i,j,a[3][3],b[3][3],c[3][3];
printf("enter matrix A elements");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("enter matrix B elements");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
printf("matrix A");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	printf("%d",a[i][j]);
}
printf("\n");
}
printf("MATRIX B");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	printf("%d",b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("matrix c");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
}
