#include <stdio.h>

int main() {
    int s = 0;
    
    for(int i=1; i<=4; i++){ // rows
        for(int j=1; j<=s; j++){ // pre-spacing
            printf(" ");
        }
        s++;
        for(int j=4; j>=i; j--){ // cols
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}