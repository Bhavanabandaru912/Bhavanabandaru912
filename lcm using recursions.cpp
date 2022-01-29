#include <stdio.h>
int lcm(int a,int b);
int main()
{
int n1,n2,LCM;
printf("Enter any two numbers");
scanf("%d%d",&n1,&n2);
if(n1>n2)
LCM=lcm(n2,n1);
else
LCM=lcm(n1,n2);
printf("LCM of %d and %d is %d",n1,n2,LCM);
return 0;
}
int lcm(int a,int b)
{
static int multiple=0;
multiple += b;
if((multiple% a==0)&&(multiple% b==0))
{
return multiple;
}
else 
 return lcm(a,b);
}
