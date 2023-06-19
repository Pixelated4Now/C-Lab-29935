#include <stdio.h>

int main()
{
    int num, ans = 1;

    printf("Enter the number whose factorial you want to calculate: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Invalid input.\n");
    else {
        for (num; num != 0; num--)
          ans *= num;

        printf("Factorial: %d\n", ans);
    }

    return 0;
}
