#include <stdio.h>

int main()
{
    float radius;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("\nDiameter: %.2f", radius*2);
    printf("\nCircumference: %.2f", 2*PI*radius);
    printf("\nArea: %.2f\n\n", PI*radius*radius);

    return 0;
}
