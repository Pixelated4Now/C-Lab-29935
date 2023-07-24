#include <stdio.h>

void sum()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Sum: %d\n\n", (n1 + n2));
}

int main()
{
    for (int i = 0; i < 5; ++i){
        sum();
    }
}
