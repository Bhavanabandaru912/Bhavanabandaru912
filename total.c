#include<stdio.h>
main()
{
	int T,TW,F,H,FH;
	printf("no of 10 rupee notes:");
	scanf("%d",&T);
	printf("no of 20 rupee notes:");
	scanf("%d",&TW);
	printf("no of 50 rupee notes:");
	scanf("%d",&F);
	printf("no of 100 rupee notes:");
	scanf("%d",&H);
	printf("no of 500 rupee notes:");
	scanf("%d",&FH);
	printf("the piggy bank total:%d",T*10+TW*20+F*50+F*50+H*100+FH*500);
}
