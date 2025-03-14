#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter Integer: ");
    scanf("%d", &n); // taking input

    for(int i = 1; i <= n; i++){
        sum += i; // calculating sum
    }

    printf("Sum: %d", sum);

    return 0;
}