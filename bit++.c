#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);

    while (n--) {
        char statement[5];
        scanf("%s", statement);

        if (strstr(statement, "++")) {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}
