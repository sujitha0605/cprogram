#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {  // optimized loop
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int differencek(int arr[], int k, int size) {
    int i;
    int removedcoins = 0;
    int min = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] - min > k) {
            removedcoins += arr[i] - (min + k);
        }
    }
    return removedcoins;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    int k;
    printf("Enter k value: ");
    scanf("%d", &k);

    int value = differencek(arr, k, n);
    printf("Number of removed coins is %d\n", value);

    return 0;
}
