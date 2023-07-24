#include <stdio.h>

void three_in_one(int n1, int n2)
{
    printf("\nSum: %d\nDifference: %d\nProduct: %d\n\n", (n1 + n2), (n1 - n2), (n1 * n2));
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    three_in_one(n1, n2);

    return 0;
}
