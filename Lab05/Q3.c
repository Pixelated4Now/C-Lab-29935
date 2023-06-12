#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    char choice;
    float radius;

    printf("Hey there! What do you want to calculate today?\nChoose!\n\nMENU:\n1. 'C' for the circumference of a circle\n2. 'A' for the area of a circle:\n3. 'V' for the volume of a sphere\n\nChoose your calculation of the day: ");
    scanf(" %c", &choice);

    do {
        printf("All right, just one more step to go!\nEnter the radius: ");
        scanf("%f", &radius);
    } while (radius <= 0);

    switch(choice) {
      case 'C':
        printf("\nCircumference: %.2f\n", 2*PI*radius);
        break;
      case 'A':
        printf("\nArea: %.2f\n", PI*radius*radius);
        break;
      case 'V':
        printf("\nVolume: %.2f\n",((4.0/3.0)* PI * (radius*radius*radius)));
        break;
      default:
        printf("\nInvalid choice.\n");
    }

    return 0;
}
