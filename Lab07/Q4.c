#include <stdio.h>

int main()
{
    int user_num, temp, total = 0;

    printf("Enter a number: ");
    scanf("%d", &user_num);

    temp = user_num;

    while (temp != 0) {
            total += temp%10;
            temp /= 10;
    }

    printf("\nThe sum of all the digits in %d is %d.\n\n", user_num, total);

    return 0;
}
