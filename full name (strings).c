#include<stdio.h>
#include<string.h>
int main()
{char first[20],second[20],third[20],name[50];
scanf("%s %s %s",first,second,third);
strcat(first,second);
strcat(first,third);
strcpy(name,first);
printf("full name is %s",name);
}
