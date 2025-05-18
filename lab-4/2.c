#include <stdio.h>

// Newton's Backward Interpolation for given table
int main() {
    int n = 8, i, j;
    float x[] = {1,2,3,4,5,6,7,8};
    float fx[] = {1,8,27,64,125,216,343,512};
    float diff[8][8], h, p, val = 7.5, result, term;

    // Creating the backward difference table
    for (i = 0; i < n; i++)
        diff[i][0] = fx[i];
    for (j = 1; j < n; j++)
        for (i = n - 1; i >= j; i--)
            diff[i][j] = diff[i][j-1] - diff[i-1][j-1];

    h = x[1] - x[0];
    p = (val - x[n-1]) / h;
    result = fx[n-1];
    term = 1;
    for (i = 1; i < n; i++) {
        term *= (p + (i - 1)) / i;
        result += term * diff[n-1][i];
    }

    printf("Value of f(7.5) using Newton's Backward Interpolation: %.5f\n", result);
    return 0;
}
