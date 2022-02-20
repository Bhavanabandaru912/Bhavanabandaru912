#include<stdio.h>
main()
{
	int a[30];
	int i,max = 0,min ,n;
	printf("no of elements u want to enter");
	scanf("%d",&n);
	printf("enter the numbers");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}  
	  for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }


        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("minimum element is %d\n",min);
    printf("maximum element is %d\n",max);
	
}
