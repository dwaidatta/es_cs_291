#include <stdio.h>

int main(){
    
    for(int i=1; i<=5; i++){ // rows
        for(int j=i; j>=1; j--){ // cols
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}