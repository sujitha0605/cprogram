#include <stdio.h>
#include <math.h>

typedef long long ll;

int iscube(long long int x) {
    long long int left = 1, right = 1000000;
    while (left <= right) {
        long long int mid = (left + right) / 2;
        long long int cube = mid * mid * mid;
        if (cube == x) 
        {
            return 1;
        }
        if (cube < x) 
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long product = a * b;
        if (iscube(product)) 
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No\n");
        }
    }
    return 0;
}
