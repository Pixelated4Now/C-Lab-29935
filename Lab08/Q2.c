#include <stdio.h>

int main()
{
    int array_size, i, scalsum1 = 0, scalsum2 =0;
    printf("How many elements do you want your arrays to store? ");
    scanf("%d", &array_size);

    int array1[array_size], array2[array_size];

    printf("\nEnter values for the first array:\n");
    for (i = 0; i < array_size; i++)
        scanf("%d", &array1[i]);

    printf("\nEnter values for the second array:\n");
    for (i = 0; i < array_size; i++)
        scanf("%d", &array2[i]);

    //Scalar sum
    for (i = 0; i < array_size; ++i){
        scalsum1 += array1[i];
        scalsum2 += array2[i];
    }
    printf("\nScalar sum of the first array: %d\nScalar sum of the second array: %d\n\n", scalsum1, scalsum2);

    //Vector sum
    int vector_sum[array_size];

    printf("Vector sum of the two arrays: ");
    for (i = 0; i < array_size; ++i) {
        vector_sum[i] = array1[i] + array2[i];
        printf("%d  ", vector_sum[i]);
    }
    printf("\n\n");

    //Vector Product
    int vector_product[array_size];

    printf("Vector product of the two arrays: ");
    for (i = 0; i < array_size; ++i) {
        vector_product[i] = array1[i] * array2[i];
        printf("%d  ", vector_product[i]);
    }
    printf("\n\n");

    //Scalar Product
    int scalar_product[array_size], sum = 0;

    for (i = 0; i < array_size; ++i) {
        scalar_product[i] = array1[i] * array2[i];
        sum += scalar_product[i];
    }
    printf("Scalar product of the two arrays: %d\n\n", sum);

    return 0;
}
