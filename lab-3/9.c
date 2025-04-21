#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Output: ");
    if(isalpha(str[0])) printf("%c", toupper(str[0]));
    for(int i = 1; str[i] != '\0'; i++)
        if(str[i-1] == ' ' && isalpha(str[i]))
            printf("%c", toupper(str[i]));
    printf("\n");
    return 0;
}
