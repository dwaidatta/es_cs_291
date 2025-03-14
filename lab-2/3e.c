#include <stdio.h>

int main() {
    int n;
    double sum = 0.0; // using double to store fractional values
    double k;
    int factorial = 1;

    printf("Enter Integer: ");
    scanf("%d", &n); // taking input

    for(int i = 1; i <= n; i++){
        factorial *= i; // calculating factorial
        k = 1.0/factorial;
        sum += k; // calculating sum
    }

    printf("Sum: %lf", sum);

    return 0;
}