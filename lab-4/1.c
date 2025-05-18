#include <stdio.h>

// Newton's Forward Interpolation for given table
int main() {
    int n = 5, i, j;
    float x[] = {0.5, 1.0, 1.5, 2.0, 2.5};
    float fx[] = {0.22245, 0.25031, 0.27799, 0.30546, 0.33269};
    float diff[5][5], h, p, val = 1.1, result, term;

    // Creating the forward difference table
    for (i = 0; i < n; i++)
        diff[i][0] = fx[i];
    for (j = 1; j < n; j++)
        for (i = 0; i < n - j; i++)
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];

    h = x[1] - x[0];
    p = (val - x[0]) / h;
    result = fx[0];
    term = 1;
    for (i = 1; i < n; i++) {
        term *= (p - (i - 1)) / i;
        result += term * diff[0][i];
    }

    printf("Value of f(1.1) using Newton's Forward Interpolation: %.5f\n", result);
    return 0;
}
