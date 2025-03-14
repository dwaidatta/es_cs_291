#include <stdio.h>

int main() {
    int x;
    int n;
    int sum = 0;
    printf("Enter number: ");
    scanf("%d", &x);

    while (x > 0){
        n = x % 10; // last digit
        sum += n; // calculating sum
        x = x/10; // removing the used digit
    }

    printf("Sum: %d", sum);

    return 0;
}