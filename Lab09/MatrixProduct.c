#include <stdio.h>

int main()
{
    int array1[3][3], array2[3], array3[3], i, j;

    printf("Populating the 3 x 3 matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value to be stored in element [%d, %d]: ", (i + 1), (j + 1));
            scanf("%d", &array1[i][j]);
        }
        printf("\n");
    }

    printf("\nPopulating the 3 x 1 matrix:\n");
    for (i = 0; i < 3; ++i) {
        printf("Enter the value to be stored in element [%d, %d]: ", (i + 1), 1);
        scanf("%d", &array2[i]);
    }

    printf("\nProduct of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        array3[i] = ((array1[i][0] * array2[0]) + (array1[i][1] * array2[1]) + (array1[i][2] * array2[2]));
        printf("%d\n", array3[i]);
    }

    return 0;
}
