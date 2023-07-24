#include <stdio.h>

float quotient(int n1, int n2)
{
    return (float)n1 / n2;
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("\nQuotient: %.2f\n", quotient(n1, n2));

    return 0;
}
