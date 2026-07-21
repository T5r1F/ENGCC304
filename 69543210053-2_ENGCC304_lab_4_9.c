#include <stdio.h>

int main() {
    char letter;

    scanf(" %c", &letter);

    switch (letter) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;

        default:
            printf("Consonant");
    }

    return 0;
}