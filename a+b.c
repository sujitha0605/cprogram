#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        char expr[4]; 
        scanf("%s", expr);
        int a = expr[0] - '0'; 
        int b = expr[2] - '0'; 
        printf("%d\n", a + b); 
    }
    return 0;
}
