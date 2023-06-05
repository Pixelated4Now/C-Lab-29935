#include <stdio.h>

int main()
{
    float bsal, allowance = 0, bonus, sales, gmr;   // gmr - gross monthly renumeration
    int yos;                                        // yos - years of service
    char city;

    printf("Enter your basic salary: ");
    scanf("%f", &bsal);

    printf("Enter your years of service: ");
    scanf("%d", &yos);

    printf("Enter the initial of the city where you work: ");
    scanf(" %c", &city);

    printf("Enter the amount of sales made this month: ");
    scanf("%f", &sales);

    if (yos > 5)
        allowance += 0.10*bsal;

    if (city == 'C')
        allowance += 2500;

    if((sales >= 0) && (sales < 25000))
        bonus = 0.1 * sales;
    else if ((sales >= 25000) && (sales < 50000))
        bonus = 0.12 * sales;
    else if (sales >= 5000)
        bonus = 0.15 * sales;

    gmr = bsal + allowance + bonus;
    printf("Your gross monthly renumeration is Rs. %.2f\n", gmr);



    return 0;
}
