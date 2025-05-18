#include <stdio.h>
#include <math.h>

// Function whose root is to be found
float f(float x) {
    return 2 * x - 3 * cos(x) - 1.85;
}

int main() {
    float a, b, c, fa, fb, fc;
    int max_iter = 1000, i;
    float tol = 0.00001;

    printf("Enter interval a and b: ");
    scanf("%f %f", &a, &b);

    fa = f(a);
    fb = f(b);

    if (fa * fb >= 0) {
        printf("Invalid interval. No root guaranteed.\n");
        return 1;
    }

    // Regular-Falsi iteration
    for (i = 0; i < max_iter; i++) {
        c = (a * fb - b * fa) / (fb - fa);
        fc = f(c);

        if (fabs(fc) < tol) {
            printf("Root found: %.5f\n", c);
            return 0;
        }

        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }
    }

    printf("Root not found within max iterations.\n");
    return 1;
}
