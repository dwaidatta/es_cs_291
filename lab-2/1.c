#include <stdio.h>

int main() {
    int n;

    printf("Enter Integer: ");
    scanf("%d", &n); // taking input

    int factorial = 1;

    for(int i = 1; i <= n; i++){
        factorial *= i; // calculating factorial
    }

    printf("Factorial: %d", factorial);

    return 0;
}