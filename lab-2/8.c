#include <stdio.h>

int main(){
    int upper, lower;
    // taking lower and upper ranges as input
    printf("Enter lower range: ");
    scanf("%d", &lower);
    printf("Enter upper range: ");
    scanf("%d", &upper);

    int i;
    int sum = 0;

    for(i = lower; i <= upper; i++){ // loop from lower range to upper range
        if (i % 7 == 0){ // checking divisibity by 7
            sum += i; // adding to sum
        }
    }

    printf("Sum: %d", sum);

    return 0;
}