#include <stdio.h>

int main() {
    char command;

    scanf(" %c", &command);

    switch (command) {
        case 'A':
            printf("Add");
            break;

        case 'D':
            printf("Delete");
            break;

        case 'U':
            printf("Update");
            break;

        default:
            printf("Unknown command");
    }

    return 0;
}