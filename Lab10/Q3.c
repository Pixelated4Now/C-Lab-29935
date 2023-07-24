#include <stdio.h>

int product(int num1, int num2)
{
    return (num1 * num2);
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Product of the two numbers: %d\n", product(n1,n2));
    return 0;
}
