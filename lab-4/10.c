#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char stream[20];
    int roll_number;
    int year;
    int age;
    char grade[5];
};

// Function to remove trailing newline from fgets input
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

int main() {
    struct Student s1;

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    remove_newline(s1.name);

    printf("Enter stream: ");
    fgets(s1.stream, sizeof(s1.stream), stdin);
    remove_newline(s1.stream);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_number);

    printf("Enter year: ");
    scanf("%d", &s1.year);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    // Clear input buffer before reading grade (string)
    while(getchar() != '\n');

    printf("Enter grade: ");
    fgets(s1.grade, sizeof(s1.grade), stdin);
    remove_newline(s1.grade);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Stream: %s\n", s1.stream);
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Year: %d\n", s1.year);
    printf("Age: %d\n", s1.age);
    printf("Grade: %s\n", s1.grade);

    return 0;
}
