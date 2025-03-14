#include <stdio.h>

int PrimeCheck(int n){ // prime checking function
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

int main(){
    int upper, lower;
    printf("Enter lower range: ");
    scanf("%d", &lower);
    printf("Enter upper range: ");
    scanf("%d", &upper);

    int i;
    int sum = 0;

    for(i = lower; i <= upper; i++){
        if (!PrimeCheck(i)){ // checking for prime
            sum += i; // calculating sum
        }
    }

    printf("Sum: %d", sum);

    return 0;
}