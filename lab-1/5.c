#include <stdio.h>

int main() {
    int number;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check even or odd
    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}
