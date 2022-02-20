#include<stdio.h>
int main()
{int row,column,mul[5][5];
int i,j;
printf("MULTIPLICATION TABLE\n");
printf(" ");
for(j=1;j<=5;j++)
{printf("%4d",j);
}
printf("\n");
printf("_____________________\n");
for(i=0;i<5;i++)
{row=i+1;
printf("%2d |",row);
for(j=1;j<=5;j++)
{column = j;
mul[i][j]=row*column;
printf("%4d",mul[i][j]);
}
printf("\n");
}

}

