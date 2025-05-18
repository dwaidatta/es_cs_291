#include <stdio.h>

// Function to integrate
float f(float x) {
    return 1 / (1 + x);
}

int main() {
    float a = 0, b = 5, h = 1, sum = 0;
    int i, n = (b - a) / h;

    // Summing function values at internal points
    for (i = 1; i < n; i++)
        sum += f(a + i * h);

    // Applying Trapezoidal rule
    float result = (h / 2) * (f(a) + 2 * sum + f(b));
    printf("Integral value using Trapezoidal rule: %.5f\n", result);
    return 0;
}
