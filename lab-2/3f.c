#include <stdio.h>
#include <math.h>

int factorial(int num){ // function to calculate factorial
    int i;
    int f = 1;
    for(i = 1; i <= num; i++){
        f = f * i;
    }

    return f;
}

int main() {
    int n;
    double x;
    double sum = 0.0;
    double term;
    int k = -1;


    printf("Enter x: ");
    scanf("%lf", &x); // taking x input

    printf("Enter Integer: ");
    scanf("%d", &n); // taking n input

    sum = x;

    for(int i = 2; i <= n; i++){
        term = k * (pow(x, (i*2)-1)/factorial((i*2)-1)); // craeting the term to be added
        k = k * (-1); // k is used to alter the signs of the terms
        sum += term; // calculating sum
    }

    printf("Sum: %lf", sum);

    return 0;
}