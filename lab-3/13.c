#include <stdio.h>
#define PI 3.14159

float area_triangle(float b, float h) { return 0.5 * b * h; }
float area_rectangle(float l, float w) { return l * w; }
float area_circle(float r) { return PI * r * r; }

int main() {
    int choice;
    float b, h, l, w, r;
    while(1) {
        printf("1. Triangle\n2. Rectangle\n3. Circle\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter base and height: ");
                scanf("%f %f", &b, &h);
                printf("Area = %.2f\n", area_triangle(b, h));
                break;
            case 2:
                printf("Enter length and width: ");
                scanf("%f %f", &l, &w);
                printf("Area = %.2f\n", area_rectangle(l, w));
                break;
            case 3:
                printf("Enter radius: ");
                scanf("%f", &r);
                printf("Area = %.2f\n", area_circle(r));
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
