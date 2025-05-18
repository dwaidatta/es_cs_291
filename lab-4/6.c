#include <stdio.h>
#include <math.h>

// Function and its derivative
float f(float x) {
    return 3 * x * x * x - 9 * x * x + 8;
}
float df(float x) {
    return 9 * x * x - 18 * x;
}

int main() {
    float x, x1, tol = 0.00001;
    int max_iter = 1000, i = 0;

    printf("Enter initial guess: ");
    scanf("%f", &x);

    // Newton-Raphson iteration
    while (i < max_iter) {
        x1 = x - f(x) / df(x);
        if (fabs(x1 - x) < tol) {
            printf("Root found: %.5f\n", x1);
            return 0;
        }
        x = x1;
        i++;
    }

    printf("Root not found within max iterations.\n");
    return 1;
}
