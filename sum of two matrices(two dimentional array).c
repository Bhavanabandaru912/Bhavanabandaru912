#include<stdio.h>
main()
{int a[3][3],b[3][3],c[3][3],i,j;
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {  
  scanf("%d\t",&a[i][j]);
 }
}
printf("\n");
for(i=0;i<3;i++)
{ 
 for(j=0;j<3;j++)
 {  
  scanf("%d\t",&b[i][j]);
 }
}
printf("\n");
printf("First matrix:\n");
for(i=0;i<3;i++)
{
 printf("\n");
 for(j=0;j<3;j++)
 {  
  printf("%d\t",a[i][j]);
 }
}
printf("\nSecond matrix:\n");
for(i=0;i<3;i++)
{
 printf("\n");	
 for(j=0;j<3;j++)
 {  
  printf("%d\t",b[i][j]);
 }
}
for(i=0;i<3;i++)
{c[i][j]=0;
for(j=0;j<3;j++)
{
 c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nSum of two matrices is\n");
for(i=0;i<3;i++)
{printf("\n");
for(j=0;j<3;j++)
{printf("%d\t",c[i][j]);
}

}}
