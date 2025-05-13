#include <stdio.h>
 
void mewing(int n, int x, int y) {
    if ((x > 0 && y > 0) || (x == 0 && y == 0)) {
        printf("-1\n");
        return;
    }
 
    int k = x > 0 ? x : y;
    if ((n - 1) % k != 0) {
        printf("-1\n");
        return;
    }
 
    int g = (n - 1) / k;
    int c = 2;
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", c);
        }
        c += k;
    }
    printf("\n");
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        mewing(n, x, y);
    }
    return 0;
}