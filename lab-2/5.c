#include <stdio.h>

int main() {
    int x;
    int n;
    int rev = 0;
    printf("Enter number: ");
    scanf("%d", &x);

    while (x > 0){
        n = x % 10; // taking last digit
        rev = rev*10 + n; // creating number
        x = x/10; // removing the digit used
    }

    printf("Reversed number: %d", rev);

    return 0;
}