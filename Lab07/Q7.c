#include <stdio.h>

int main()
{
    int term1 = 0, term2 = 1, temp;

    printf("Fibonacci sequence: %d %d ", term1, term2);

    for (int i = 3; i <= 10; i++) {
        temp = term1;
        term1 = term2;
        term2 = term1 + temp;
        printf("%d ", term2);
    }

    printf("\n");

    return 0;
}
