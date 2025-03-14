#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Output swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
