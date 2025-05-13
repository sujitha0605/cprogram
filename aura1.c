#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int iscovered(int a[], int b[], int n, int m, int r) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] >= b[j] - r && a[i] <= b[j] + r) {
            i++;
        } else {
            j++;
        }
    }
    return i == n;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int low = 0, high = 2e9, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (iscovered(a, b, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
