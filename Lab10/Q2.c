#include <stdio.h>

void sum_and_difference(int num1, int num2)
{
    printf("Sum:\n  %d + %d = %d\n\nDifference:\n  %d - %d = %d\n\n", num1, num2, (num1 + num2), num1, num2, (num1 - num2));
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    sum_and_difference(n1, n2);

    return 0;
}
