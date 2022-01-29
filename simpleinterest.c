#include<stdio.h>
main()
{float principle,time,rateofinterest,simpleinterest;
printf("value for principle is");
scanf("%f",&principle);
printf("time is ");
scanf("%f",&time);
printf("rateofinterest is");
scanf("%f",&rateofinterest);
simpleinterest=(principle*time*rateofinterest)/100;
printf("value of simpleinterest is %f",simpleinterest);
}
