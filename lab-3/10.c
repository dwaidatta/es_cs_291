#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int count = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i]) {
        if((i == 0 && isalpha(str[i])) ||
           (str[i] == ' ' && isalpha(str[i+1])))
            count++;
        i++;
    }
    printf("Number of words: %d\n", count);
    return 0;
}
