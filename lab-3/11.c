#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        sum += factorial(i);
    printf("Sum = %d\n", sum);
    return 0;
}
