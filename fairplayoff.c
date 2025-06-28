#include <stdio.h>
int main() {
    int t, i, arr[4], p1, p2, m1, m2;
    scanf("%d", &t);
    while (t--) {
        for (i = 0; i < 4; i++) {
            scanf("%d", &arr[i]);
        }
        if (arr[0] > arr[1]) {
            p1 = arr[0];
            m1 = arr[1];
        } else {
            p1 = arr[1];
            m1 = arr[0];
        }
        if (arr[2] > arr[3]) {
            p2 = arr[2];
            m2 = arr[3];
        } else {
            p2 = arr[3];
            m2 = arr[2];
        }
        if (m1 < p2 && m2 < p1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
