#include<stdio.h>
main()
{char ch;
ch=getchar();
switch(ch)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	     	printf("vowel");
	     	break;
	default:printf("consonant");     	
}
}
