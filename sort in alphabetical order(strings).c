#include<stdio.h>
#include<string.h>
#define MAXCHAR 20
#define ITEMS 5
main()
{int i=0,j=0;
 char string[ITEMS][MAXCHAR],dummy[MAXCHAR];
 printf("enter names of %d items\n",ITEMS);
 for(i=0;i<ITEMS;i++)
 scanf("%s",string[i]);
 for(i=1;i<ITEMS;i++)
 {for(j=1;j<ITEMS-i;j++)
 {
 	if(strcmp(string[j-1],string[j])>0)
 	{
 		strcpy(dummy,string[j-1]);
 		strcpy(string[j-1],string[j]);
 		strcpy(string[j],dummy);
	 }
 }
 }
 printf("\nsorted list is\n");
 for(i=0;i<ITEMS;i++)
 printf("%s\n",string[i]);
 }
