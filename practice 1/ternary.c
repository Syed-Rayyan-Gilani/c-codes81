/*Write a C program using the ternary operator (without nesting) to classify a person's age group as:*/

#include <stdio.h>
int main(){

    int age;
    
    printf("enter age");
    scanf("%d",&age);

    age<=12 ? printf("person is child\n"): age<19 ? printf("is a teenager"):printf("is a adult");

    return 0;



}