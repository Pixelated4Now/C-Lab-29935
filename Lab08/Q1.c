#include <stdio.h>

int main()
{
    int num[10], i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; ++i)
        scanf("%d", &num[i]);

    int min, max, total;
    min = max = total = num[0];

    for (i = 1; i < 10; ++i) {
        if (num[i] > max)
            max = num[i];

        if (num[i] < min)
            min = num[i];

        total += num[i];
    }

    printf("\n\nMinimum: %d\nMaximum: %d\nThe average of all 10 values: %.2f\n\nArray in reverse: ", min, max, (total/10.0));

    for (i = 9; i >= 0; --i){
        printf("%d\t", num[i]);
    }

    printf("\n\n");

    return 0;
}
