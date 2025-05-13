#include <stdio.h>

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int isvalid(int res[], int n) {
    for (int i = 0; i < n; i++) {
        int prev = res[(i - 1 + n) % n];
        int next = res[(i + 1) % n];
        if (!((res[i] > prev && res[i] > next) || (res[i] < prev && res[i] < next))) {
            return 0;
        }
    }
    return 1;
}

void circlepeak(int arr[], int n) {
    bubblesort(arr, n);
    int all_equal = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            all_equal = 0;
            break;
        }
    }
    if (all_equal) {
        printf("NO\n");
        return;
    }
    
    int res[n];
    int mid = n / 2;
    int j = 0;

    for (int i = 0; i < mid; i++) {
        res[j++] = arr[i + mid];
        res[j++] = arr[i];
    }
    
    if (n % 2 == 1) {
        res[n - 1] = arr[mid];
    }
    
    if (isvalid(res, n)) {
        printf("YES\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", res[i]);
        }
        printf("\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int mem[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &mem[i]);
        }
        circlepeak(mem, n);
    }
    return 0;
}
