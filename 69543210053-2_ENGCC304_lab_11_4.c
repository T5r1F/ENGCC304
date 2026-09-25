#include <stdio.h>
#include <string.h>

int main() {
    char word1[100];
    char word2[100];

    scanf("%s", word1);
    scanf("%s", word2);

    if (strcmp(word1, word2) == 0) {
        printf("Same");
    } else {
        printf("Different");
    }

    return 0;
}