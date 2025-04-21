#include <stdio.h>

int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    int a = 1, b = 1, next;
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
