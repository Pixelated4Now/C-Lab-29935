#include <stdio.h>

int main()
{
    int i = 0;

    // while
    while (i != 101)
        printf("%d ", i++);

    i = 0;
    // do..while
    do {
        printf("%d ", i++);
    } while (i != 101);

    for (i = 0; i != 101; i++)
        printf("%d ", i);

    return 0;
}
