#include <stdio.h>

int main()
{
    //if-else statement
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num%2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);



    printf("\n\n");



    // switch statement
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    switch(n%2) {
      case 0:
        printf("%d is an even number.\n", n);
        break;
      case 1:
        printf("%d is an odd number.\n", n);
        break;
    }


    return 0;
}
