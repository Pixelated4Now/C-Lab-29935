#include <stdio.h>

int main()
{
    float n1, n2;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("\nMENU:\n1. Addition       : +\n2. Subtraction    : -\n3. Multiplication : *\n4. Division       : /\n\nSelect the operator of the calculation you want to perform: ");
    scanf(" %c", &op);

    switch(op) {
       case '+':
           printf("\n%.2f + %.2f = %.2f\n", n1, n2, (n1 + n2));
           break;
        case '-':
           printf("\n%.2f - %.2f = %.2f\n", n1, n2, (n1 - n2));
           break;
       case '*':
           printf("\n%.2f * %.2f = %.2f\n", n1, n2, (n1 * n2));
           break;
        case '/':
           printf("\n%.2f / %.2f = %.2f\n", n1, n2, (n1 / n2));
           break;
        default:
            printf("Invalid operator.\n");
    }


    return 0;
}
