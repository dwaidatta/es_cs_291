#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
};

int main() {
    struct Student s1 = {"Shraddha", 101};
    struct Student *ptr = &s1;

    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_number);
    return 0;
}
