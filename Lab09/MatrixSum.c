#include <stdio.h>

int main()
{
    int array1[3][3], array2[3][3], array3[3][3], i, j;
    printf("Populating the 3 x 3 matrices:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value to be stored in element (%d, %d) of the first matrix: ", (i + 1), (j + 1));
            scanf("%d", &array1[i][j]);
            printf("Enter the value to be stored in element (%d, %d) of the second matrix: ", (i + 1), (j + 1));
            scanf("%d", &array2[i][j]);
            printf("\n");
        }
    }

    printf("\nMatrix sum of the two 3 x 3 matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            array3[i][j] = array1[i][j] + array2[i][j];
            printf(" %d\t", array3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
