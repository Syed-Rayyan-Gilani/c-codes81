#include <stdio.h>
int main()

{
    int maths, sci, eng;
    printf("enter the numbers of maths,science,english:\n");
    scanf("%d %d %d", &maths, &sci, &eng);

    if (maths < 33 || sci < 33 || eng < 33)
    {
        printf("you failed due to less marks in individual subject");
    }
    else if ((maths + sci + eng )/ 3 < 40)
    {
        printf("you failed due to less percentage");
    }
    else
    {
        printf("you passed the exam");
    }
    return 0;
}