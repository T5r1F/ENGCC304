#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = '\0';

    printf("Length = %d", strlen(word));

    return 0;
}