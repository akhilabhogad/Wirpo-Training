#include <stdio.h>

void dispList(int [], int);
void sortDescending(int [], int);

int main() {
    int arr[] = {10, 1, 3, 5, 2, 8, 9, 22};
    int Size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array:\n");
    dispList(arr, Size);
    
    sortDescending(arr, Size);
    
    printf("\nSorted array in descending order:\n");
    dispList(arr, Size);
    
    printf("\n%d\n\n", arr[3]);
    
    return 0;
}

void dispList(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d->", a[i]);
    printf("\n");
}

void sortDescending(int a[], int n) {
    int i , j ,temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}