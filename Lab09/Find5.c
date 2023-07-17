#include <stdio.h>

int main()
{
    int array[4][4] = {{8, 17, 9, 6},
                        {5, 2, 11, 18},
                        {7, 27, 28, 0},
                        {4, 1, 3, 10}};
    int foundFlag = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 5) {
                foundFlag = 1;
                 printf("\n%d found in element [%d, %d] of the array.\n\n", 5, (i + 1), (j + 1));
                 break;
            }
        }
    }


    return 0;
}
