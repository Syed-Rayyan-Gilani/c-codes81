/*Write a program to print multiplication table of a given number n. */
#include <stdio.h>
int main()
{
    int n;
    printf("multiplication table of any number you want");
    scanf("%d",&n);

    for (int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }

}