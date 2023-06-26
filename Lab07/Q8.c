#include <stdio.h>

int main()
{
    int num, temp, count = 0, ans = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0){
        temp /= 10;
        count++;
    }

    temp = num;

    for (int i = 1; i <= count; i++) {
        ans += pow((temp%10), count);
        temp /= 10;
    }

    if (ans == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
