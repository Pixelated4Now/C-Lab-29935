#include <stdio.h>

int main()
{
    int total = 0;
    int mark[10];
    float avg;

    for (int i = 0; i < 10; i++) {
        printf("%d. Enter mark: ", i + 1);
        scanf("%d", &mark[i]);
        total += mark[i];
    }

    avg = total/10;

    printf("Total marks: %d\nAverage: %.2f\n\n", total, avg);

    if (avg < 50)
        printf("Fail!\n");
    else
        printf("Pass!\n");

    return 0;
}
