#include <stdio.h>

#define PI 3.14159

int main() {
    double r, h;
    double volume, surfaceArea;

    printf("Enter radius: ");
    scanf("%lf", &r);

    printf("Enter height: ");
    scanf("%lf", &h);

    // Formulas to find volume and surface area
    volume = PI * r * h;
    surfaceArea = 2 * PI * r * r + 2 * PI * r * h;

    printf("\nVolume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}     