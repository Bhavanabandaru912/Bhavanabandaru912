#include<stdio.h>
main()
{int num,i=1,rem=0,sum=0;
printf("enter any number");
scanf("%d",&num);


while( i <= num)  
                     {  
                              rem = num % i;
							  i++;  
                             if (rem == 0)  
                                        {  
                                               sum = sum + i; 
											   
                                         }  
                        }  
if (sum==2*num)  
                      printf("  Perfect Number");  
           else  
                      printf(" not a Perfect Number");  
}

