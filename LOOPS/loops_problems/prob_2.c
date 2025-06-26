/*Write a program to print multiplication table of 10 in reversed order.*/
#include <stdio.h>
int main()
{
    int n=10;
    for(int i=10;i<=10 && i>0;i--)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}