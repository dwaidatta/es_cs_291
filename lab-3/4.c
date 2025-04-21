#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++)
        for(j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1]) {
                temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;
            }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for(i = 0; i < n-1; i++) {
        min_idx = i;
        for(j = i+1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, i, choice;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n], arr2[n], arr3[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr2[i] = arr3[i] = arr[i];
    }
    printf("1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: bubbleSort(arr, n); printArray(arr, n); break;
        case 2: insertionSort(arr2, n); printArray(arr2, n); break;
        case 3: selectionSort(arr3, n); printArray(arr3, n); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
