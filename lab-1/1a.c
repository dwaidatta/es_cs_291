#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
