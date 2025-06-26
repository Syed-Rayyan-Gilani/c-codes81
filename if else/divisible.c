#include <stdio.h>
int main()
{

    int number;

    printf("enter the number:");
    scanf("%d", &number);

    number%17==0?printf("the number is divisible by 17"):printf("the number is not divisible by 17");

    return 0;
}   cond?stat1:stat2