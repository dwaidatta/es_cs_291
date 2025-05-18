#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Cannot open source file\n");
        return 1;
    }

    dest = fopen("dest.txt", "w");
    if (dest == NULL) {
        printf("Cannot open destination file\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully.\n");
    fclose(source);
    fclose(dest);
    return 0;
}
