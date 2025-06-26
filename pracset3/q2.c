#include <stdio.h>

int main()
{
    int income;
    float tax;

    printf("Enter total income: ");
    scanf("%d", &income);

    if (income < 250000)
    {
        tax = 0;
    }
    else if (income >= 250000 && income <= 500000)
    {
        tax = income * (5.0 / 100);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = income * (20.0 / 100);
    }
    else
    {
        tax = income * (30.0 / 100);
    }

    float income_after_tax = income - tax;

    printf("Tax amount: ₹%.2f\n", tax);
     

    return 0;
}