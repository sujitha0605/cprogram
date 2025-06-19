#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int seen[26] = {0}; 
        int balloons = 0;
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'A';
            if (seen[idx] == 0) {
                balloons += 2; 
                seen[idx] = 1;
            } else {
                balloons += 1; 
            }
        }
        printf("%d\n", balloons);
    }
    return 0;
}
