#include <stdio.h>

int main() {
    int x;
    int n;
    int rev = 0;
    printf("Enter number: ");
    scanf("%d", &x);

    int x_copy = x; // keeping copy of x

    while (x > 0){
        n = x % 10; // last digit
        rev = rev*10 + n; // creating number
        x = x/10; // removing the used digit
    }

    if (x_copy == rev){ // checking if same number
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    

    return 0;
}