#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter Integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i += 2){ // increasing by 2, [1, 3, 5, ...]
        sum += i; // calculating sum
    }

    printf("Sum: %d", sum);

    return 0;
}