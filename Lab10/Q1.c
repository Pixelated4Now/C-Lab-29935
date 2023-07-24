#include <stdio.h>

void sum_and_difference()
{
    int num1, num2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\n%d + %d = %d\n", num1, num2, (num1 + num2));
    printf("%d - %d = %d\n\n", num1, num2, (num1 - num2));
}

int main()
{
    sum_and_difference();

    return 0;
}
