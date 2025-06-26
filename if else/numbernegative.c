#include <stdio.h>
int main(){

    int number;

    printf("enter a number:");
    scanf("%d",&number);

    if (number<0){
        printf("number is negative");
    
    }
     else{
        printf("number is positive");
     }
     return 0;

}