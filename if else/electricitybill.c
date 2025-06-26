#include <stdio.h>
int main()
{

    int units;
    float bill = 0;

    printf("enter the number of units consumed:");
    scanf("%d", &units);

    if (units <= 50)
    {
        bill = units * 0.5;
    }
    else if (units<=100)
    {
        bill=(50*0.5)+(units-50)*1.0;
    }
    else if (units<=150)
    {
        bill=(50*0.5)+(50*1.0)+(units-100)*1.50;
    }
    else if(units<=200)
    {
        bill=(50*0.5)+(50*1.0)+(50*1.50)+(units-150)*2.0;
    }
    else {
        bill = (50 * 0.50) + (50 * 1.00) + (50 * 1.50) + (50 * 2.00) + (units - 200) * 5.00;
    }

    printf("the total electricity bill is %.2f:",bill);

    return 0;

      
    
    
}