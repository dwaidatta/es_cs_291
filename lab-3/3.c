#include <stdio.h>

int main() {
    int n, i, max, min;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}
