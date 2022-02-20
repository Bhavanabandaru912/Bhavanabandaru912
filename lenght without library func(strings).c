#include<stdio.h>
main()
{char str[20];
int i,l=0;
gets(str);
printf("%s",str);
for(i=0;str[i]!='\0';i++)
{l=l+1;
}
printf("\nlength of string is %d",l);
}
