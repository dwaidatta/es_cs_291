#include <stdio.h>

int PrimeCheck(int n){ // function to check prime
    int i;
    if (n < 2){
        return 1; // returns 1 if not prime
    }
    else{
        for(i = 2; i*i <= n; i++){
            if (n % i == 0){
                return 1; // returns 1 if not prime
            }
        }
        return 0; // returns 0 if prime
    }
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int flag = PrimeCheck(n); // flag to store returned value

    if (flag == 1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }


    return 0;
}