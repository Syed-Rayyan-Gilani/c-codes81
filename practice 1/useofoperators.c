#include <stdio.h>
int main()
{

    int marks;

    printf("enter obtained marks:");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("the student is passed \n");
    }

    else if (marks < 33 && marks >= 0)
    {
        printf("the student is failed \n");
    }

    else
    {
        printf("invalid result");
    }
    return 0;
}