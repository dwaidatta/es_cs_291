#include <stdio.h>

// Recursive GCD for two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int gcd_three(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("GCD of %d, %d and %d is %d\n", a, b, c, gcd_three(a, b, c));
    return 0;
}
