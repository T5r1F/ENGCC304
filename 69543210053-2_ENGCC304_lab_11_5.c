#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char target[] = "a";
    int count = 0;
    char *p;

    scanf("%s", word);

    p = word;

    while ((p = strstr(p, target)) != NULL) {
        count++;
        p += strlen(target);
    }

    printf("Count = %d", count);

    return 0;
}