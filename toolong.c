#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char word[101];
        scanf("%s", word);
        int n = strlen(word);

        if (n > 10) {
            printf("%c%d%c\n", word[0], n - 2, word[n - 1]);
        } else {
            printf("%s\n", word);
        }
    }
    return 0;
}
