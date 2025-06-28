#include <stdio.h>
#include <string.h>
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    char arr[101];
    scanf("%s", arr);
    int n = strlen(arr);
    int i, j = 0;
    int digits[n / 2 + 1];
    for (i = 0; i < n; i += 2) {
        digits[j] = arr[i] - '0';
        j++;
    }
    int digitCount = j;
    sort(digits, digitCount);
    j = 0;
    for (i = 0; i < n; i += 2) {
        arr[i] = digits[j] + '0';
        j++;
    }
    printf("%s\n", arr);
    return 0;
}
