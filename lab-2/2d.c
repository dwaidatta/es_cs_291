#include <stdio.h>

int main() {
    int k = 1;

    for(int i=1; i<=4; i++){ // rows
        for(int j=1; j<=i; j++){ // cols
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}