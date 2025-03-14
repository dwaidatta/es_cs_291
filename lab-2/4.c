#include <stdio.h>

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int c;
    printf("%d %d ", a, b); // printing first and second terms

    for(int i = 3; i <= n; i++){ // printing from third term onwards
        c = a + b; // fibonacci logic
        a = b;
        b = c;

        printf("%d ", c);
    }
    
    return 0;
}