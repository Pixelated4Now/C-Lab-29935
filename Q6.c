#include <stdio.h>

int main()
{
    char symbol;

    printf("Enter data: ");
    scanf("%c", &symbol);

    printf("\nThe integer equivalent of %c is %d.\n", symbol, symbol);


    return 0;
}
