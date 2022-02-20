#include <stdio.h>
#include <math.h>

int main() {
    int i,num,digit,sum=0,countdigits=0,temp;

    printf("Enter the number \n");
    scanf("%d", &num);
    temp = num;
    while (num > 0) {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }

    while (temp > 0) {
      countdigits += 1;
      temp /= 10;
    }

    i = 0;
    sum = 0;
    while (num > 0) {
        digit = num % 10;
        sum = sum + pow(digit, countdigits);
        countdigits -= 1;
        num /= 10;
    }

    printf("The final sum is %d\n", sum);
}
