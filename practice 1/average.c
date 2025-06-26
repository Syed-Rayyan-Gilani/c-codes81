#include <stdio.h>
int main () {
    
    float a,b,c,average;

    printf("Enter the first number:");
    scanf("%f",&a);

    printf("Enter the second number:");
    scanf("%f",&b);

    printf("Enter the third number:");
    scanf("%f",&c);

    average=(a+b+c)/3;

    printf("The average of three numbers are %f\n",average);
    return 0;

}