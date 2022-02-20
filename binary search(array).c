#include<stdio.h>
main()
{int i,n,key,high,mid,low;
int a[50];
printf("enter no of elements");
scanf("%d",&n);
printf("elements to be entered must be sorted in ascending order");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter key value");
scanf("%d",&key);
high=n-1;
mid=(low+high)/2;
while(low<=high)
{ if(a[mid]<key)
low=mid+1;
else if(a[mid]==key)
{printf("element found at location %d",mid+1);
break;
}
else
high=mid+1;
mid=(low+high)/2;
}
if(low>high)
{printf("element not found");
}
}
