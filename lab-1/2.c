#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform all operations
    printf("\nResults of operations:\n");
    printf("Addition: %.2f\n", num1 + num2);
    printf("Subtraction: %.2f\n", num1 - num2);
    printf("Multiplication: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2f\n", num1 / num2);
    } else {
        printf("Division: Error! Division by zero is not allowed.\n");
    }

    return 0;
}
