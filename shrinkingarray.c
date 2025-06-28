#include <stdio.h>
#include <stdlib.h>
int isbeautiful(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (abs(arr[i] - arr[i + 1]) <= 1) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        if (isbeautiful(arr, n)) {
            printf("0\n");
            continue;
        }
        if (n == 2) {
            printf("-1\n");
            continue;
        }
        int found = 0;
        for (int i = 0; i < n - 1; i++) {
            int m = (arr[i] + arr[i + 1]) / 2;
            int temp[n - 1], k = 0;

            for (int j = 0; j < n; j++) {
                if (j == i) {
                    temp[k++] = m; 
                    j++;           
                } else {
                    temp[k++] = arr[j];
                }
            }
            if (isbeautiful(temp, n - 1)) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("1\n");
        } else {
            printf("-1\n");
        }
    }
    return 0;
}

