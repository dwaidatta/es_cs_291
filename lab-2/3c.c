#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 1.0; // using double to store fractional values
    double k = 0.5; // 1/2 = 0.5

    printf("Enter Integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += pow(k, i); // calculating sum
    }

    printf("Sum: %lf", sum);

    return 0;
}