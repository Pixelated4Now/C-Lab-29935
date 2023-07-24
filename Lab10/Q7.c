#include <stdio.h>

double product(int num, float fraction)
{
    return (double)num * fraction;
}

int main()
{
    int num;
    float fraction;

    printf("Enter an integer and a floating-point number: ");
    scanf("%d %f", &num, &fraction);

    printf("Product: %.2lf\n\n", product(num, fraction));

    return 0;
}
