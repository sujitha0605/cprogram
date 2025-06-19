#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int max1 = -1, max2 = -1;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] > max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2) {
                max2 = a[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == max1) {
                printf("%d ", a[i] - max2);
            } else {
                printf("%d ", a[i] - max1);
            }
        }
        printf("\n");
    }
    return 0;
}
