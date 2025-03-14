#include <stdio.h>

int main() {
    const float PI = 3.14159; // Define PI as a constant
    float radius, area;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Output area
    printf("Area of the circle: %.2f\n", area);
    
    return 0;
}
