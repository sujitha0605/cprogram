#include <stdio.h>
#include <string.h>
#define MAX_N 1000
#define MAX_WORD 4
#define MAX_TOTAL_WORDS 3000
typedef struct {
    char word[MAX_WORD];
    int count;
} WordCount;
WordCount wordList[MAX_TOTAL_WORDS];
int totalWords;
int findOrAddWord(char *word) {
    for (int i = 0; i < totalWords; ++i) {
        if (strcmp(wordList[i].word, word) == 0) {
            wordList[i].count++;
            return i;
        }
    }
    strcpy(wordList[totalWords].word, word);
    wordList[totalWords].count = 1;
    return totalWords++;
}
int getCount(char *word) {
    for (int i = 0; i < totalWords; ++i) {
        if (strcmp(wordList[i].word, word) == 0) {
            return wordList[i].count;
        }
    }
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        totalWords = 0;
        char words[3][MAX_N][MAX_WORD];
        for (int p = 0; p < 3; ++p) {
            for (int i = 0; i < n; ++i) {
                scanf("%s", words[p][i]);
                findOrAddWord(words[p][i]);
            }
        }
        int score[3] = {0};
        for (int p = 0; p < 3; ++p) {
            for (int i = 0; i < n; ++i) {
                int cnt = getCount(words[p][i]);
                if (cnt == 1) score[p] += 3;
                else if (cnt == 2) score[p] += 1;
            }
        }
        printf("%d %d %d\n", score[0], score[1], score[2]);
    }
    return 0;
}
