#include <stdio.h>
#include <math.h>

int iscube(long long int x) {
    long long int fin= round(cbrt((double)x));
    return fin * fin * fin == x;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int product = a * b;
        if (iscube(product)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
