#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter four numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    // Compare and find the greatest3
    if (a >= b && a >= c && a >= d)
        printf("%d is the greatest.\n", a);
    else if (b >= a && b >= c && b >= d)
        printf("%d is the greatest.\n", b);
    else if (c >= a && c >= b && c >= d)
        printf("%d is the greatest.\n", c);
    else
        printf("%d is the greatest.\n", d);

    return 0;
}