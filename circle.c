#include <stdio.h>
#define PI 3.14159

int main() {
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circum = 2 * PI * radius;

    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circum);

    return 0;
}
