#include <stdio.h>

int main()
{
    int base, exp;
    double ans = 1.0;

    printf("Enter an integer, together with the power you want to raise it to: ");
    scanf("%d %d", &base, &exp);

    if (exp >= 0) {
        for (exp; exp > 0; exp--)
            ans *= base;
    }
    else {
        for (exp; exp < 0; exp++)
            ans *= base;

        ans = 1 / ans;
    }

    printf("Answer: %.2lf\n\n", ans);

    return 0;
}
