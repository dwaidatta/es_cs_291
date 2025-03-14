#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Find roots based on discriminant
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    } else {
        printf("No real roots exist.\n");
    }

    return 0;
}
