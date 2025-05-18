#include <stdio.h>

// Function to integrate
float f(float x) {
    return 1 / (1 + x * x);
}

int main() {
    float a = 0, b = 1;
    int n = 6, i;
    float h = (b - a) / n, sum1 = 0, sum2 = 0;

    // Summing function values at odd and even indices
    for (i = 1; i < n; i += 2)
        sum1 += f(a + i * h);
    for (i = 2; i < n; i += 2)
        sum2 += f(a + i * h);

    // Applying Simpson's 1/3 rule
    float result = (h / 3) * (f(a) + 4 * sum1 + 2 * sum2 + f(b));
    printf("Integral value using Simpson's 1/3 rule: %.5f\n", result);
    return 0;
}
