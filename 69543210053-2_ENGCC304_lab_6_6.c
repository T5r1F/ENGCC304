#include <stdio.h>

int main() {
    int choice;

    scanf("%d", &choice);

    while (choice != 0) {
        if (choice == 1) {
            printf("Hello\n");
        } else if (choice == 2) {
            printf("Bye\n");
        } else {
            printf("Invalid\n");
        }

        scanf("%d", &choice);
    }

    printf("Exit\n");

    return 0;
}